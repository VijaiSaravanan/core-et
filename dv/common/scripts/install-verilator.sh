#!/bin/bash
set -e

VERILATOR_VERSION="v5.042"

INSTALL_DIR="/home/vsysuser/verif/vyoma/workspace/projects/july7/tools/verilator"
SOURCE_DIR="/home/vsysuser/verif/vyoma/workspace/projects/july7/tools/src/verilator"

if [ -x "$INSTALL_DIR/bin/verilator" ]; then
    echo "Verilator already installed at ${INSTALL_DIR}"
    exit 0
fi

if [ ! -d "$INSTALL_DIR" ]; then
    mkdir -p "$INSTALL_DIR"
fi

echo "Installing Verilator ${VERILATOR_VERSION} into ${INSTALL_DIR}"

if [ ! -d "$SOURCE_DIR" ]; then
    git clone https://github.com/verilator/verilator.git "$SOURCE_DIR"
fi

cd "$SOURCE_DIR"
git submodule update --init --recursive
git checkout "$VERILATOR_VERSION"

autoconf
./configure --prefix="$INSTALL_DIR"
make -j"$(nproc)"
make install
