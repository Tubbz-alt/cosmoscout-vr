////////////////////////////////////////////////////////////////////////////////////////////////////
//                               This file is part of CosmoScout VR                               //
//      and may be used under the terms of the MIT license. See the LICENSE file for details.     //
//                        Copyright: (c) 2019 German Aerospace Center (DLR)                       //
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CS_GRAPHICS_SIMPLE_ECLIPSE_SHADOW_CASTER_HPP
#define CS_GRAPHICS_SIMPLE_ECLIPSE_SHADOW_CASTER_HPP

#include "../../cs-utils/SimpleTexture.hpp"
#include "BodyProperties.hpp"
#include "EclipseShadowCaster.hpp"
#include <utility>

namespace cs::graphics {
cs::utils::Texture4f generateShadowTexture(Body const& body);

class SimpleEclipseShadowCaster : public EclipseShadowCaster {
 public:
  explicit SimpleEclipseShadowCaster(Body const& body);
  virtual ~SimpleEclipseShadowCaster();

  void bind(GLenum textureUnit) override;
  void unbind(GLenum textureUnit) override;

 private:
  uint32_t mShadowTexture;
};

} // namespace cs::graphics

#endif // CS_GRAPHICS_SIMPLE_ECLIPSE_SHADOW_CASTER_HPP
