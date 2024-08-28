# ----------------------------------------------------------------------------
# Copyright (c) 2024, Lucas Patel.
#
# Distributed under the terms of the Modified BSD License.
#
# The full license is in the file LICENSE, distributed with this software.
# ----------------------------------------------------------------------------

from setuptools import find_packages, setup

import versioneer

description = ("A template QIIME 2 plugin.")

setup(
    name="q2-birdman",
    version=versioneer.get_version(),
    cmdclass=versioneer.get_cmdclass(),
    license="BSD-3-Clause",
    packages=find_packages(),
    author="Lucas Patel",
    author_email="lpatel@ucsd.edu",
    description=description,
    url="https://github.com/biocore/BIRDMAn",
    entry_points={
        "qiime2.plugins": [
            "q2_birdman="
            "q2_birdman"
            ".plugin_setup:plugin"]
    },
    package_data={
        "q2_birdman": ["citations.bib"],
        "q2_birdman.tests": ["data/*"],
    },
    zip_safe=False,
)
