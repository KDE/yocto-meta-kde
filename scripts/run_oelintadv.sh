#!/usr/bin/env bash

# SPDX-FileCopyrightText: 2026 Marc Ferland <marc.ferland@gmail.com>
#
# SPDX-License-Identifier: MIT

set -euo pipefail

RET=0

# Paths to exclude (modify as needed)
EXCLUDES=(
    "./recipes-meta-oe-backports/*"
)

# Build find exclusion arguments
FIND_EXCLUDES=()
for path in "${EXCLUDES[@]}"; do
    FIND_EXCLUDES+=( -not -path "$path" )
done

# Find all .bb and .bbclass files except excluded paths
mapfile -t BB_FILES < <(
    find . -type f \( -name "*.bb" -o -name "*.bbclass" \) "${FIND_EXCLUDES[@]}"
)

if [ ${#BB_FILES[@]} -eq 0 ]; then
    echo "No .bb or .bbclass files found."
    exit 0
fi

# Run linter
for file in "${BB_FILES[@]}"; do
    echo "Linting $file..."
    if ! oelint-adv "$file"; then
        echo "Lint failed on $file"
	RET=1
    fi
done

exit ${RET}
