#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Shark.EShAccountChannel
enum class EShAccountChannel : uint8_t
{
	EShAccountChannel__DEV         = 0,
	EShAccountChannel__STEAM       = 1,
	EShAccountChannel__SHARKNET    = 2,
	EShAccountChannel__PS5         = 3,
	EShAccountChannel__UNKNOWN     = 4,
	EShAccountChannel__EShAccountChannel_MAX = 5
};


// Enum Shark.ESharkPlatformType
enum class ESharkPlatformType : uint8_t
{
	ESharkPlatformType__Windows    = 0,
	ESharkPlatformType__PS5        = 1,
	ESharkPlatformType__ESharkPlatformType_MAX = 2
};


// Enum Shark.ESharkCustomPrimitiveFloatDataName
enum class ESharkCustomPrimitiveFloatDataName : uint8_t
{
	ESharkCustomPrimitiveFloatDataName__AlbedoHueShift = 0,
	ESharkCustomPrimitiveFloatDataName__Alpha = 1,
	ESharkCustomPrimitiveFloatDataName__AmbientOcclusion = 2,
	ESharkCustomPrimitiveFloatDataName__DiffuseDesaturation = 3,
	ESharkCustomPrimitiveFloatDataName__DirtAmount = 4,
	ESharkCustomPrimitiveFloatDataName__EmissiveMultiplier = 5,
	ESharkCustomPrimitiveFloatDataName__Height = 6,
	ESharkCustomPrimitiveFloatDataName__Metallic = 7,
	ESharkCustomPrimitiveFloatDataName__Roughness = 8,
	ESharkCustomPrimitiveFloatDataName__RoughnessOffset = 9,
	ESharkCustomPrimitiveFloatDataName__WindStrength = 10,
	ESharkCustomPrimitiveFloatDataName__GlassDestruction_Use = 11,
	ESharkCustomPrimitiveFloatDataName__GlassDestruction_UseUv = 12,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Roughness = 13,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Rustiness = 14,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Dirtiness = 15,
	ESharkCustomPrimitiveFloatDataName__Vehicle_EmissiveStrength = 16,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Metalness = 17,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushAllZones = 18,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone0 = 19,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone1 = 20,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone2 = 21,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone3 = 22,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone4 = 23,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CanBounce = 24,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CanSquash = 25,
	ESharkCustomPrimitiveFloatDataName__Custom = 26,
	ESharkCustomPrimitiveFloatDataName__Custom01 = 27,
	ESharkCustomPrimitiveFloatDataName__Custom02 = 28,
	ESharkCustomPrimitiveFloatDataName__Custom03 = 29,
	ESharkCustomPrimitiveFloatDataName__Custom04 = 30,
	ESharkCustomPrimitiveFloatDataName__Custom05 = 31,
	ESharkCustomPrimitiveFloatDataName__Custom06 = 32,
	ESharkCustomPrimitiveFloatDataName__Custom07 = 33,
	ESharkCustomPrimitiveFloatDataName__Custom08 = 34,
	ESharkCustomPrimitiveFloatDataName__Custom09 = 35,
	ESharkCustomPrimitiveFloatDataName__Custom10 = 36,
	ESharkCustomPrimitiveFloatDataName__Custom11 = 37,
	ESharkCustomPrimitiveFloatDataName__Custom12 = 38,
	ESharkCustomPrimitiveFloatDataName__Custom13 = 39,
	ESharkCustomPrimitiveFloatDataName__Custom14 = 40,
	ESharkCustomPrimitiveFloatDataName__Custom15 = 41,
	ESharkCustomPrimitiveFloatDataName__Custom16 = 42,
	ESharkCustomPrimitiveFloatDataName__Custom17 = 43,
	ESharkCustomPrimitiveFloatDataName__Custom18 = 44,
	ESharkCustomPrimitiveFloatDataName__Custom19 = 45,
	ESharkCustomPrimitiveFloatDataName__Custom20 = 46,
	ESharkCustomPrimitiveFloatDataName__Custom21 = 47,
	ESharkCustomPrimitiveFloatDataName__Custom22 = 48,
	ESharkCustomPrimitiveFloatDataName__Custom23 = 49,
	ESharkCustomPrimitiveFloatDataName__Custom24 = 50,
	ESharkCustomPrimitiveFloatDataName__Custom25 = 51,
	ESharkCustomPrimitiveFloatDataName__Custom26 = 52,
	ESharkCustomPrimitiveFloatDataName__Custom27 = 53,
	ESharkCustomPrimitiveFloatDataName__Custom28 = 54,
	ESharkCustomPrimitiveFloatDataName__Custom29 = 55,
	ESharkCustomPrimitiveFloatDataName__Custom30 = 56,
	ESharkCustomPrimitiveFloatDataName__Custom31 = 57,
	ESharkCustomPrimitiveFloatDataName__Count = 58,
	ESharkCustomPrimitiveFloatDataName__ESharkCustomPrimitiveFloatDataName_MAX = 59
};


// Enum Shark.ESharkCustomPrimitiveVector2DataName
enum class ESharkCustomPrimitiveVector2DataName : uint8_t
{
	ESharkCustomPrimitiveVector2DataName__UvOffset = 0,
	ESharkCustomPrimitiveVector2DataName__UvScale = 1,
	ESharkCustomPrimitiveVector2DataName__GlassDestruction_Tiling = 2,
	ESharkCustomPrimitiveVector2DataName__Custom_0 = 3,
	ESharkCustomPrimitiveVector2DataName__Custom_2 = 4,
	ESharkCustomPrimitiveVector2DataName__Custom_4 = 5,
	ESharkCustomPrimitiveVector2DataName__Custom_6 = 6,
	ESharkCustomPrimitiveVector2DataName__Custom_8 = 7,
	ESharkCustomPrimitiveVector2DataName__Custom_10 = 8,
	ESharkCustomPrimitiveVector2DataName__Custom_12 = 9,
	ESharkCustomPrimitiveVector2DataName__Custom_14 = 10,
	ESharkCustomPrimitiveVector2DataName__Custom_16 = 11,
	ESharkCustomPrimitiveVector2DataName__Custom_18 = 12,
	ESharkCustomPrimitiveVector2DataName__Custom_20 = 13,
	ESharkCustomPrimitiveVector2DataName__Custom_22 = 14,
	ESharkCustomPrimitiveVector2DataName__Custom_24 = 15,
	ESharkCustomPrimitiveVector2DataName__Custom_26 = 16,
	ESharkCustomPrimitiveVector2DataName__Custom_28 = 17,
	ESharkCustomPrimitiveVector2DataName__Custom_30 = 18,
	ESharkCustomPrimitiveVector2DataName__Count = 19,
	ESharkCustomPrimitiveVector2DataName__ESharkCustomPrimitiveVector2DataName_MAX = 20
};


// Enum Shark.ESharkCustomPrimitiveVector3DataName
enum class ESharkCustomPrimitiveVector3DataName : uint8_t
{
	ESharkCustomPrimitiveVector3DataName__Color1_Rgb = 0,
	ESharkCustomPrimitiveVector3DataName__Color2_Rgb = 1,
	ESharkCustomPrimitiveVector3DataName__EmissiveColor_Rgb = 2,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_Pos = 3,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_ProjX = 4,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_ProjY = 5,
	ESharkCustomPrimitiveVector3DataName__Vehicle_ColorTintRgb = 6,
	ESharkCustomPrimitiveVector3DataName__Vehicle_InteriorColorTintRgb = 7,
	ESharkCustomPrimitiveVector3DataName__Vehicle_BounceXyz = 8,
	ESharkCustomPrimitiveVector3DataName__Custom_0 = 9,
	ESharkCustomPrimitiveVector3DataName__Custom_1 = 10,
	ESharkCustomPrimitiveVector3DataName__Custom_4 = 11,
	ESharkCustomPrimitiveVector3DataName__Custom_5 = 12,
	ESharkCustomPrimitiveVector3DataName__Custom_8 = 13,
	ESharkCustomPrimitiveVector3DataName__Custom_9 = 14,
	ESharkCustomPrimitiveVector3DataName__Custom_12 = 15,
	ESharkCustomPrimitiveVector3DataName__Custom_13 = 16,
	ESharkCustomPrimitiveVector3DataName__Custom_16 = 17,
	ESharkCustomPrimitiveVector3DataName__Custom_17 = 18,
	ESharkCustomPrimitiveVector3DataName__Custom_20 = 19,
	ESharkCustomPrimitiveVector3DataName__Custom_21 = 20,
	ESharkCustomPrimitiveVector3DataName__Custom_24 = 21,
	ESharkCustomPrimitiveVector3DataName__Custom_25 = 22,
	ESharkCustomPrimitiveVector3DataName__Custom_28 = 23,
	ESharkCustomPrimitiveVector3DataName__Custom_29 = 24,
	ESharkCustomPrimitiveVector3DataName__Count = 25,
	ESharkCustomPrimitiveVector3DataName__ESharkCustomPrimitiveVector3DataName_MAX = 26
};


// Enum Shark.ESharkCustomPrimitiveVector4DataName
enum class ESharkCustomPrimitiveVector4DataName : uint8_t
{
	ESharkCustomPrimitiveVector4DataName__ColorRgba = 0,
	ESharkCustomPrimitiveVector4DataName__Custom_0 = 1,
	ESharkCustomPrimitiveVector4DataName__Custom_4 = 2,
	ESharkCustomPrimitiveVector4DataName__Custom_8 = 3,
	ESharkCustomPrimitiveVector4DataName__Custom_12 = 4,
	ESharkCustomPrimitiveVector4DataName__Custom_16 = 5,
	ESharkCustomPrimitiveVector4DataName__Custom_20 = 6,
	ESharkCustomPrimitiveVector4DataName__Custom_24 = 7,
	ESharkCustomPrimitiveVector4DataName__Custom_28 = 8,
	ESharkCustomPrimitiveVector4DataName__Count = 9,
	ESharkCustomPrimitiveVector4DataName__ESharkCustomPrimitiveVector4DataName_MAX = 10
};


// Enum Shark.ESharkFourWayDirection
enum class ESharkFourWayDirection : uint8_t
{
	ESharkFourWayDirection__Forward = 0,
	ESharkFourWayDirection__Right  = 1,
	ESharkFourWayDirection__Back   = 2,
	ESharkFourWayDirection__Left   = 3,
	ESharkFourWayDirection__Count  = 4,
	ESharkFourWayDirection__ESharkFourWayDirection_MAX = 5
};


// Enum Shark.ESharkTelemtryResponseCodes
enum class ESharkTelemtryResponseCodes : uint8_t
{
	ESharkTelemtryResponseCodes__UNKNOWN_CODE = 0,
	ESharkTelemtryResponseCodes__Success = 1,
	ESharkTelemtryResponseCodes__StandardHTTPCode = 2,
	ESharkTelemtryResponseCodes__InvalidMessage = 3,
	ESharkTelemtryResponseCodes__IllegalTitleInput = 4,
	ESharkTelemtryResponseCodes__IllegalDataInput = 5,
	ESharkTelemtryResponseCodes__IllegalMessage = 6,
	ESharkTelemtryResponseCodes__ServerException = 7,
	ESharkTelemtryResponseCodes__InvalidURL = 8,
	ESharkTelemtryResponseCodes__InvalidVerbOrContentType = 9,
	ESharkTelemtryResponseCodes__ESharkTelemtryResponseCodes_MAX = 10
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
