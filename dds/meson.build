# See if fastrtps is already installed on the system with cmake
fastrtps_dep = dependency('fastrtps',
    required: false,
    disabler: true,
    method: 'cmake'
)
fastcdr_dep = dependency('fastcdr',
    required: false,
    disabler: true,
    method: 'cmake'
)
if fastrtps_dep.found() and fastcdr_dep.found()
  # Using version: '>=2.2' in dependency() does not work as the fastrtps version
  # meson compares to does not represent the version installed to the system.
  # Seems to get the version of foonathan_memory instead of fastrtps.
  system_fastrtps_version = fastrtps_dep.get_variable(cmake: 'fastrtps_VERSION',
                                                      default_value: '')
  use_system_fastrtps = system_fastrtps_version.version_compare('>=2.14')
  if not use_system_fastrtps
    message('Installed fastrtps version needs to be >= 2.14')
    fastrtps_dep = disabler()
  endif
# If not not on system, try without cmake
# Won't be able to check version, but will respect an overridden dependency
else
    fastrtps_dep = dependency('fastrtps',
        required: false,
        disabler: true,
    )
    fastcdr_dep = dependency('fastcdr',
        required: false,
        disabler: true,
    )
endif
# If it still isn't found, fallback to subproject
if not fastrtps_dep.found() or not fastcdr_dep.found()
  cmake = import('cmake')
  fastdds_cmake_opts = cmake.subproject_options()
  fastdds_cmake_opts.add_cmake_defines({'THIRDPARTY_fastcdr': 'ON'})

  fastdds_cmake_subproj = cmake.subproject('fast-dds', options: fastdds_cmake_opts)
  if fastdds_cmake_subproj.found()
    fastrtps_dep = fastdds_cmake_subproj.dependency('fastrtps')
    fastcdr_dep = fastdds_cmake_subproj.dependency('fastcdr')
    meson.override_dependency('fastrtps', fastrtps_dep)
    meson.override_dependency('fastcdr', fastcdr_dep)
  else
    fastrtps_dep = disabler()
    fastcdr_dep = disabler()
  endif
endif

subdir('cpp')
