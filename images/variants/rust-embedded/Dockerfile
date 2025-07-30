###
### Rust Embedded Image
###
FROM fedora-rust-embedded-base-image:latest

# Install packages
ARG ADDITIONAL_PACKAGES=""
RUN [[ ! -z "${ADDITIONAL_PACKAGES}" ]] \
    && (sudo dnf install -y ${ADDITIONAL_PACKAGES} \
        && sudo dnf clean all) \
    || true
