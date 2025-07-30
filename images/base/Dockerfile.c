###
### C Base Image
###
FROM fedora-core-base-image:latest

RUN set -eux; \
    # Install packages
    sudo dnf install -y autoconf gdb gcc clang cmake ninja-build clang-tools-extra cppcheck valgrind perf gcovr; \
    # Install jemalloc
    git clone https://github.com/jemalloc/jemalloc /tmp/jemalloc; \
    cd /tmp/jemalloc; \
    ./autogen.sh --prefix=/usr --enable-prof --enable-debug; \
    make -j4; \
    sudo make install; \
    rm -rf /tmp/jemalloc; \
    # Clean step
    sudo dnf clean all
