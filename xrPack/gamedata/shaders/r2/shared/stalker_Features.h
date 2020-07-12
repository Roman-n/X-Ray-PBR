#ifndef STALKER_FEATURES_H
#define STALKER_FEATURES_H

#define STALKER_LEGACY // Used for LDR IBL

//#define STALKER_USE_LEGACY_RAIN

// TODO : #define STALKER_SUN_DISK_RADIUS 1.0f

// CONTACT SHADOWS
#define STALKER_USE_SSRS_SUN
#define STALKER_SSRS_SUN_RAY_LENGTH dx_SSRS_Params.x 

#define STALKER_USE_SSRS_POINT_SPOT // Need restart
#define STALKER_SSRS_POINT_SPOT_RAY_LENGTH dx_SSRS_Params.y 

// SSSSS
#define STALKER_USE_SSSSS
#define STALKER_SSS_WEIGHTS half3(1.0f, 0.3f, 0.1f)
#define STALKER_SSS_NUM_SAMPLES 15
#define STALKER_SSS_SIZE 0.0125f

// SSAO
#define STALKER_CRYTEK_SSAO
#define STALKER_CRYTEK_SSAO_NUM_SAMPLES 8
#define STALKER_CRYTEK_SSAO_SIZE dx_SSAO_Params.x

#define STALKER_STOCHASTIC_SSAO_LENGTH dx_SSAO_Params.y
#define STALKER_STOCHASTIC_SSAO_THICKNESS dx_SSAO_Params.z
#define STALKER_STOCHASTIC_SSAO_SAMPLES 8

//#define STALKER_BAKED_LIGHTING_SSAO_MIN_BLENDING
#define STALKER_MULTI_BOUNCE_SSAO_APPROX

// SSR
#define STALKER_USE_STOCHASTIC_SSR
#define STALKER_STOCHASTIC_SSR_TEMPORAL_RESPONSE dx_SSR_Params.x 
#define STALKER_STOCHASTIC_SSR_ATTEN_BORDER dx_SSR_Params.y

// FOG
//#define STALKER_FOG_SUN
#define STALKER_FOG_EXP lerp(0.001f, 0.043f, dx_WeatherParams.x)
#define STALKER_FOG_HEIGHT lerp(100.0f, 500.f, dx_WeatherParams.x)
#define STALKER_FOG_HEIGHT_OFFSET 10.0f
#define STALKER_FOG_HEIGHT_DENSITY 0.005f
//

// TAA
#define STALKER_USE_TAA
#define STALKER_TAA_MIN_RESPONSE dx_TAA_Params.x
#define STALKER_TAA_MAX_RESPONSE dx_TAA_Params.y

//#define STALKER_USE_MBLUR
#define STALKER_MBLUR_SCALE 0.2f

// BLOOM
#define STALKER_USE_STOCHASTIC_BLOOM

// TONEMAP
#define STALKER_USE_TONEMAP
//#define STALKER_TONEMAP_HABLE
#define STALKER_TONEMAP_BIAS dx_Tonemap_Params.x

// DEBUG
//#define STALKER_DEBUG_PBR_ALBEDO
//#define STALKER_DEBUG_COMBINE_PASS
//#define STALKER_DEBUG_DIVIDE
#define STALKER_DEBUG_DIVIDER 0.5f

#endif