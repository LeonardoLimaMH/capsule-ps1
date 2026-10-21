# Toolchain de decompilação PS1 (byte-matching)
FROM ubuntu:24.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y --no-install-recommends \
      binutils-mips-linux-gnu cpp-mips-linux-gnu make git wget ca-certificates \
      python3 python3-pip python3-venv xz-utils bsdmainutils \
    && rm -rf /var/lib/apt/lists/*
RUN python3 -m venv /opt/venv
ENV PATH=/opt/venv/bin:$PATH
RUN pip install --no-cache-dir "splat64[mips]==0.50.1" "spimdisasm==1.42.4" pyyaml "pycparser<3" colorama \
      cxxfilt python-Levenshtein capstone unicorn pytest pytest-xdist
# Compiladores GCC antigos (builds PSX do PsyQ recompilados pelo projeto decompals/old-gcc)
RUN for v in 2.7.2-psx 2.8.0-psx 2.8.1-psx 2.6.3-psx 2.91.66-psx; do \
      mkdir -p /opt/gcc-$v && wget -q https://github.com/decompals/old-gcc/releases/download/0.17/gcc-$v.tar.gz -O /tmp/g.tgz \
      && tar xzf /tmp/g.tgz -C /opt/gcc-$v && rm /tmp/g.tgz; done
RUN git clone --depth 1 https://github.com/mkst/maspsx /opt/maspsx \
 && git clone --depth 1 https://github.com/simonlindholm/asm-differ /opt/asm-differ \
 && git clone --depth 1 https://github.com/simonlindholm/decomp-permuter /opt/decomp-permuter \
 && git clone --depth 1 https://github.com/ethteck/m2c /opt/m2c \
 && pip install --no-cache-dir "pycparser<3" graphviz || true
WORKDIR /work
