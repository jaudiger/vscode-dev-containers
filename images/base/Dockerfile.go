###
### Go Base Image
###
FROM fedora-core-base-image:latest

RUN set -eux; \
    # Install packages
    sudo dnf install -y gcc golang; \
    # Install go packages
    go install golang.org/x/tools/gopls@latest; \
    go install github.com/go-delve/delve/cmd/dlv@latest; \
    # Clean step
    sudo dnf clean all; \
    go clean --cache
