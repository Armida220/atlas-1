#ifndef ATLAS_GRAPHICS_HPP
#define ATLAS_GRAPHICS_HPP

#include <functional>
#include <iostream>
#include <iterator>
#include <memory>
#include <set>
#include <string>
#include <vector>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#ifndef GLM_FORCE_LEFT_HANDED
#define GLM_FORCE_LEFT_HANDED
#endif
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include "glm/glm.hpp"
#include "glm/gtc/type_ptr.hpp"
#define GLM_ENABLE_EXPERIMENTAL
#include "glm/gtx/transform.hpp"

typedef glm::mat4 Transform;

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

#include "atlas/core/Constants.hpp"

#include "atlas/core/Color.hpp"

#include "VulkanTools.hpp"
#include "VulkanInitializers.hpp"
#include "SwapchainSupportDetails.hpp"

using namespace glm;

#define CHECK_SUCCESS(x) (assert(x == vk::Result::eSuccess))

#ifndef DEBUG
#define VERIFY(x) assert(x)
#else
#define VERIFY(x) ((void)(x))
#endif

#define ERR_EXIT(err_msg, err_class) \
    do {                             \
        _log->critical(err_msg);     \
        _log->flush();               \
        std::terminate();            \
    } while (0)

#endif
