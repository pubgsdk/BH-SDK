#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ColoredProp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ColoredProp.BP_ColoredProp_C
// 0x001F (0x0280 - 0x0261)
class ABP_ColoredProp_C : public ABP_PropCustomColor_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Static_Mesh;                                              // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Material_Element_Index;                                   // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ColoredProp.BP_ColoredProp_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
