###
### Core Image
###
FROM fedora-core-base-image:latest

# Install packages
ARG ADDITIONAL_PACKAGES=""
RUN [[ ! -z "${ADDITIONAL_PACKAGES}" ]] \
    && (sudo dnf install -y ${ADDITIONAL_PACKAGES} \
        && sudo dnf clean all) \
    || true
