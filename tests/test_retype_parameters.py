"""Parameter searches must not rewrite declarations or pointer/array parameters."""
import pathlib
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[1] / "tools"))
from retype import parameter_variants


def test_named_definition_only_and_body_cast_preserved():
    code = "s32 other(s32 x) { return x; }\ns32 wanted(s32 x);\ns32 wanted(s32 x) { return (u8) x; }"
    results = list(parameter_variants(code, "wanted"))
    assert len(results) == 5
    assert "s32 other(s32 x) { return x; }\ns32 wanted(s32 x);\ns32 wanted(u8 x) { return (u8) x; }" in results
    assert all(c.endswith("{ return (u8) x; }") for c in results)


def test_skip_pointer_and_array_but_find_later_scalar():
    code = "void wanted(s32 *a, u8 b[], u16 count, void *buffer, s8 mode) { use(a, b, count, buffer, mode); }"
    results = list(parameter_variants(code, "wanted"))
    assert len(results) == 10
    assert all("s32 *a, u8 b[]" in c and "void *buffer" in c for c in results)
    assert code.replace("s8 mode", "s32 mode") in results


def test_missing_definition_and_callback_are_not_guessed():
    assert not list(parameter_variants("void wanted(s32 x);", "wanted"))
    assert not list(parameter_variants("void wanted(void (*callback)(s32), s32 x) {}", "wanted"))
