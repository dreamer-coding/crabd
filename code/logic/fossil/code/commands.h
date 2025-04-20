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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

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
void handle_start(void);

/**
 * @brief Stops a running CrabDB instance.
 */
void handle_stop(void);

/**
 * @brief Checks the status of a CrabDB instance.
 */
void handle_status(void);

/**
 * @brief Restarts a CrabDB instance.
 */
void handle_restart(void);

/**
 * @brief Lists all active CrabDB processes.
 */
void handle_list(void);

/**
 * @brief Fetches logs for a CrabDB instance.
 */
void handle_logs(void);

/**
 * @brief Reloads the configuration of a CrabDB instance.
 */
void handle_reload(void);

/**
 * @brief Changes the configuration of a CrabDB instance.
 */
void handle_config(void);

#ifdef __cplusplus
}
#endif

#endif /* FOSSIL_APP_LIFECYCLE_H */
