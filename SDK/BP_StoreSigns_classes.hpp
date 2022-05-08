#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StoreSigns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StoreSigns.BP_StoreSigns_C
// 0x0038 (0x02B8 - 0x0280)
class ABP_StoreSigns_C : public ATBP_DynamicObjectBase_01_C
{
public:
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                        // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_SignHolder_01;                                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                StoreSignType;                                            // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EShopSigns_SM_Enum>                    ShopSignList;                                             // 0x0294(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	float                                              EmissiveIntensity;                                        // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              EmissiveLightTexture;                                     // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              EmissiveLightTextureInfluence;                            // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               off;                                                      // 0x02A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	int                                                Holder_mesh;                                              // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Stickers;                                                 // 0x02AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               StickersToggleSide;                                       // 0x02AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
	class UBP_StoreSignsDataInterface_C*               StoreSignDataCDO;                                         // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StoreSigns.BP_StoreSigns_C"));
		return ptr;
	}


	void AddLight(class UMaterialInstance* InMaterialInstance, const struct FTransform& InTransform);
	void AddStickers();
	void SetCustomPrimitiveData();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
