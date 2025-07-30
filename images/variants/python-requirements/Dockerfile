###
### Python With Requirements File Image
###
FROM fedora-python-base-image:latest

# Install packages
ARG ADDITIONAL_PACKAGES=""
RUN [[ ! -z "${ADDITIONAL_PACKAGES}" ]] \
    && (sudo dnf install -y ${ADDITIONAL_PACKAGES} \
        && sudo dnf clean all) \
    || true

# Add requirements
ARG REQUIREMENTS_FILE=./requirements.txt
COPY ${REQUIREMENTS_FILE} /tmp/requirements.txt
RUN pip install --no-cache-dir --user -r /tmp/requirements.txt; \
    sudo rm /tmp/requirements.txt
