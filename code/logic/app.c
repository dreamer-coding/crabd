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
#include "fossil/code/app.h"


bool app_entry(int argc, char** argv) {
    if (argc < 2) {
        fossil_io_printf("{blue,bold}Usage: crabd <command> [options]{reset}\n");
        return EXIT_FAILURE;
    }

    // The first argument is the command
    const char *command = argv[1];

    // Parse the command
    if (fossil_io_cstring_compare(command, "--help") == 0) {
        handle_help();
    } else if (fossil_io_cstring_compare(command, "--version") == 0) {
        handle_version();
    } else if (fossil_io_cstring_compare(command, "--name") == 0) {
        handle_name();
    } else if (fossil_io_cstring_compare(command, "start") == 0) {
        handle_start(argc, argv);
    } else if (fossil_io_cstring_compare(command, "stop") == 0) {
        handle_stop(argc, argv);
    } else if (fossil_io_cstring_compare(command, "status") == 0) {
        handle_status(argc, argv);
    } else if (fossil_io_cstring_compare(command, "restart") == 0) {
        handle_restart(argc, argv);
    } else if (fossil_io_cstring_compare(command, "list") == 0) {
        handle_list(argc, argv);
    } else if (fossil_io_cstring_compare(command, "logs") == 0) {
        handle_logs(argc, argv);
    } else if (fossil_io_cstring_compare(command, "reload") == 0) {
        handle_reload(argc, argv);
    } else if (fossil_io_cstring_compare(command, "config") == 0) {
        handle_config(argc, argv);
    } else if (fossil_io_cstring_compare(command, "test") == 0) {
        handle_test(argc, argv);
    } else {
        fossil_io_printf("Unknown command: %s\n", command);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
