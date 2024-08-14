// Copyright 2015-2024 The Khronos Group Inc.
//
// SPDX-License-Identifier: Apache-2.0 OR MIT
//

// This header is generated from the Khronos Vulkan XML API Registry.

// Note: This module is still in an experimental state.
// Any feedback is welcome on https://github.com/KhronosGroup/Vulkan-Hpp/issues.

module;

#define VULKAN_HPP_BUILD_MODULE
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_hpp_macros.hpp>

#if !defined( VULKAN_HPP_STD_MODULE )
#  include <algorithm>
#  include <array>     // ArrayWrapperND
#  include <string.h>  // strnlen
#  include <string>    // std::string
#  include <utility>   // std::exchange
#  include <vulkan/vulkan_hpp_macros.hpp>

#  if 17 <= VULKAN_HPP_CPP_VERSION
#    include <string_view>
#  endif

#  if !defined( VULKAN_HPP_DISABLE_ENHANCED_MODE )
#    include <tuple>   // std::tie
#    include <vector>  // std::vector
#  endif

#  if !defined( VULKAN_HPP_NO_EXCEPTIONS )
#    include <system_error>  // std::is_error_code_enum
#  endif

#  if ( VULKAN_HPP_ASSERT == assert )
#    include <cassert>
#  endif

#  if VULKAN_HPP_ENABLE_DYNAMIC_LOADER_TOOL == 1
#    if defined( __unix__ ) || defined( __APPLE__ ) || defined( __QNX__ ) || defined( __Fuchsia__ )
#      include <dlfcn.h>
#    elif defined( _WIN32 ) && !defined( VULKAN_HPP_NO_WIN32_PROTOTYPES )
using HINSTANCE = struct HINSTANCE__ *;
#      if defined( _WIN64 )
using FARPROC = int64_t( __stdcall * )();
#      else
using FARPROC = int( __stdcall * )();
#      endif
extern "C" __declspec( dllimport ) HINSTANCE __stdcall LoadLibraryA( char const * lpLibFileName );
extern "C" __declspec( dllimport ) int __stdcall FreeLibrary( HINSTANCE hLibModule );
extern "C" __declspec( dllimport ) FARPROC __stdcall GetProcAddress( HINSTANCE hModule, const char * lpProcName );
#    endif
#  endif

#  if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
#    include <compare>
#  endif

#  if defined( VULKAN_HPP_SUPPORT_SPAN )
#    include <span>
#  endif

#  include <atomic>   // std::atomic_size_t
#  include <cstring>  // strcmp
#  include <expected>
#  include <map>
#  include <memory>  // std::unique_ptr
#  include <set>
#  include <string>
#  include <utility>  // std::forward
#  include <vector>

#  if __cpp_lib_format
#    include <format>  // std::format
#  else
#    include <sstream>  // std::stringstream
#  endif
#endif

export module vulkan_hpp;

#if defined( VULKAN_HPP_STD_MODULE )
import VULKAN_HPP_STD_MODULE;
import VULKAN_HPP_STD_COMPAT_MODULE;
#endif

namespace VULKAN_HPP_NAMESPACE
{
  VULKAN_HPP_EXPORT class DispatchLoaderDynamic;
#if defined( VULKAN_HPP_DYNAMIC_DEFAULT_DISPATCHER )
  extern "C++" VULKAN_HPP_STORAGE_API VULKAN_HPP_NAMESPACE::DispatchLoaderDynamic defaultDispatchLoaderDynamic;
#endif
}  // namespace VULKAN_HPP_NAMESPACE

#include <vulkan/vulkan.hpp>
#include <vulkan/vulkan_extension_inspection.hpp>
#include <vulkan/vulkan_format_traits.hpp>
#include <vulkan/vulkan_hash.hpp>
#include <vulkan/vulkan_raii.hpp>
#include <vulkan/vulkan_shared.hpp>
