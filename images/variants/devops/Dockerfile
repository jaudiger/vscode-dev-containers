###
### DevOps Image
###
FROM fedora-devops-base-image:latest

# Install packages
ARG ADDITIONAL_PACKAGES=""
RUN [[ ! -z "${ADDITIONAL_PACKAGES}" ]] \
    && (sudo dnf install -y ${ADDITIONAL_PACKAGES} \
        && sudo dnf clean all) \
    || true

# Configure AWS CLI
ARG AWS_DEFAULT_REGION="eu-west-3"
ARG AWS_DEFAULT_OUTPUT="json"
ARG AWS_ACCESS_KEY_ID=""
ARG AWS_SECRET_ACCESS_KEY=""
RUN aws configure set default.region "${AWS_DEFAULT_REGION}"; \
    aws configure set output "${AWS_DEFAULT_OUTPUT}"; \
    aws configure set aws_access_key_id "${AWS_ACCESS_KEY_ID}"; \
    aws configure set aws_secret_access_key "${AWS_SECRET_ACCESS_KEY}"
