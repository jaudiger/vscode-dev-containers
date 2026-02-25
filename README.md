# VSCode Dev Containers

## Getting Started

This repository contains dedicated scripts to automate the management of [Dev Container](https://code.visualstudio.com/docs/devcontainers/containers) for Visual Studio Code.

These dev containers are specifically designed to provide a consistent and reproducible development environment. Here is an overview of the available containers:

- [C](./images/base/Dockerfile.c)
- [DevOps](./images/base/Dockerfile.devops)
- [Go](./images/base/Dockerfile.go)
- [Java](./images/base/Dockerfile.java)
- [Node.js](./images/base/Dockerfile.nodejs)
- [Python](./images/base/Dockerfile.python)
- [Rust](./images/base/Dockerfile.rust)
- [Rust embedded](./images/base/Dockerfile.rust-embedded)
- [Texlive](./images/base/Dockerfile.texlive)

All of the containers are based on a [common base image](./images/base/Dockerfile.core), which is a pre-configured Fedora Linux distribution.

To use this repository, follow these steps:

1. Run the `vscode-sync-config-files` script to pull the necessary configuration files from your system.
2. Build the desired dev container using the `vscode-sync-dev-images -v VARIANT` command where `VARIANT` is the name of the container you want to build.
3. Create the `.devcontainer` folder inside your project using the `vscode-sync-dev-images -v VARIANT` command. Warning: this command must be called from the root of your project.
4. Install the VSCode [Dev Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) and open the folder of your project with VSCode. A popup should open asking you to reopen the folder in a container.
