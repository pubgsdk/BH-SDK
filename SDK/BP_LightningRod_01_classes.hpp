#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightningRod_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightningRod_01.BP_LightningRod_01_C
// 0x0098 (0x02D8 - 0x0240)
class ABP_LightningRod_01_C : public ATBP_WeatherPS_01_C
{
public:
	int                                                Number_Of_Pieces;                                         // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Scale_Middle_Pieces;                                      // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Top_Piece;                                                // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Middle_Piece;                                             // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Bottom_Piece;                                             // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Enable_Bottom_Piece;                                      // 0x0254(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Enable_Top_Piece;                                         // 0x0255(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0xA];                                       // 0x0256(0x000A) MISSED OFFSET
	struct FTransform                                  NextTransform;                                            // 0x0260(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              Rotate_Top;                                               // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Rotate_Bottom;                                            // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FTransform                                  ParticleLoc;                                              // 0x02A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class UBP_LightningRod_01DataInterface_C*          LightningRodCDO;                                          // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LightningRod_01.BP_LightningRod_01_C"));
		return ptr;
	}


	void AddMiddleComponent(int InIndex);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
