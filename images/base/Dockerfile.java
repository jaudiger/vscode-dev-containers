###
### Java Base Image
###
FROM fedora-core-base-image:latest

RUN set -eux; \
    # Install packages
    sudo dnf install -y java-21-openjdk-devel-fastdebug maven-openjdk21; \
    # Initialize maven cache folder (for correct user permission)
    mkdir -p ${HOME}/.m2; \
    # Clean step
    sudo dnf clean all
