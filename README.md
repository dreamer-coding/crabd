# **crabd** — Blue Crab Daemon

`crabd` is the central daemon responsible for hosting and managing CrabDB instances across the network. It runs as a background service, responding to commands issued by tools like `crabctl`, and provides endpoints for database synchronization, remote querying, health monitoring, and system orchestration. On startup, `crabd` loads its configuration from a TOML file, which defines server settings, security policies, node relationships, and database paths. It supports running in the foreground for debugging or as a daemon for production environments. With built-in support for SSH-based authentication, token-based security, and IP allowlists, `crabd` ensures secure communication between nodes. It listens for incoming connections, processes commands, and handles lifecycle operations such as initialization, configuration deployment, and log streaming. Its modular architecture enables clean integration with metrics collection, automation scripts, and distributed control, making it the backbone of the CrabDB infrastructure.

---

## 🧭 CrabDB Command Reference

| Command                         | Flags / Options                           | Description |
|----------------------------------|--------------------------------------------|-------------|
| `crabdb --version`               |                                            | Displays the version of the CrabDB instance |
| `crabdb --name`                  |                                            | Displays the name of the CrabDB instance |
| `crabdb --help`                  |                                            | Shows help information for the CrabDB commands |
| `crabdb start`                   | `--file <db.myshell/db.noshell>`, `--mode [myshell/noshell]`, `--port <port>`, `--background` | Starts a CrabDB instance for the specified database file |
| `crabdb stop`                    | `--pid <pid>`, `--file <db>`              | Stops a running CrabDB instance |
| `crabdb status`                  | `--file <db>`, `--verbose`                | Checks if the instance is running and shows details |
| `crabdb restart`                 | `--file <db>`, `--force`                  | Stops and restarts the instance |
| `crabdb list`                    | `--all`, `--format [table/json]`          | Lists all active CrabDB processes |
| `crabdb logs`                    | `--file <db>`, `--tail <lines>`, `--follow` | Views logs for a running instance |
| `crabdb reload`                  | `--file <db>`, `--config <file.cfg>`      | Reloads the instance with updated configuration |
| `crabdb config`                  | `--file <db>`, `--set key=value`          | Changes config of a running instance |
| `crabdb test`                    | `--file <db>`, `--check-integrity`        | Runs a quick test on the instance and database integrity |

---

---

## ✅ **Prerequisites**

Ensure you have the following installed before starting:

- **Meson Build System**: This project relies on Meson. For installation instructions, visit the official [Meson website](https://mesonbuild.com/Getting-meson.html).

---

## ⚙️ **Setting Up Meson Build**

1. **Install Meson**:
    - Follow the guide on the [Meson website](https://mesonbuild.com/Getting-meson.html) for your operating system.

---

## 🚀 **Setup, Compile, Install, and Run**

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/fossillogic/crabd.git
    cd crabd
    ```

2. **Configure the Build**:

    ```sh
    meson setup builddir
    ```

3. **Compile the Project**:

    ```sh
    meson compile -C builddir
    ```

4. **Install the Project**:

    ```sh
    sudo meson install -C builddir
    ```

5. **Run the crabd Daemon**:

    ```sh
    crabd --config /etc/crabd/config.toml --foreground
    ```

---

## 🤝 **Contributing**

Interested in contributing? Please open pull requests or create issues on the [GitHub repository](https://github.com/fossillogic/crabd).

---

## 💬 **Feedback and Support**

For issues, questions, or feedback, open an issue on the [GitHub repository](https://github.com/fossillogic/crabd/issues).

---

## 📄 **License**

This project is licensed under the [Mozilla Public License](LICENSE).
