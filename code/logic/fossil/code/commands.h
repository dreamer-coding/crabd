/*
 * -----------------------------------------------------------------------------
 * Project: Fossil Logic
 *
 * This file is part of the Fossil Logic project, which aims to develop high-
 * performance, cross-platform applications and libraries. The code contained
 * herein is subject to the terms and conditions defined in the project license.
 *
 * Author: Michael Gene Brockus (Dreamer)
 *
 * Copyright (C) 2024 Fossil Logic. All rights reserved.
 * -----------------------------------------------------------------------------
 */
#ifndef FOSSIL_APP_COMMANDS_H
#define FOSSIL_APP_COMMANDS_H

#include <fossil/crabdb/framework.h>
#include <fossil/sys/framework.h>
#include <fossil/io/framework.h>

#define FOSSIL_APP_NAME "Crab Daemon"
#define FOSSIL_APP_VERSION "0.1.0"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Prints the help message for the CrabDB application.
 */
void handle_help(void);

/**
 * @brief Prints the version of the CrabDB application.
 */
void handle_version(void);

/**
 * @brief Prints the name of the CrabDB application.
 */
void handle_name(void);

/**
 * @brief Starts a CrabDB instance.
 */
void handle_start(int argc, char** argv);

/**
 * @brief Stops a running CrabDB instance.
 */
void handle_stop(int argc, char** argv);

/**
 * @brief Checks the status of a CrabDB instance.
 */
void handle_status(int argc, char** argv);

/**
 * @brief Restarts a CrabDB instance.
 */
void handle_restart(int argc, char** argv);

/**
 * @brief Lists all active CrabDB processes.
 */
void handle_list(int argc, char** argv);

/**
 * @brief Fetches logs for a CrabDB instance.
 */
void handle_logs(int argc, char** argv);

/**
 * @brief Reloads the configuration of a CrabDB instance.
 */
void handle_reload(int argc, char** argv);

/**
 * @brief Changes the configuration of a CrabDB instance.
 */
void handle_config(int argc, char** argv);

/**
 * @brief Runs internal tests for the CrabDB application.
 */
void handle_test(int argc, char** argv);

#ifdef __cplusplus
}
#endif

#endif /* FOSSIL_APP_LIFECYCLE_H */
