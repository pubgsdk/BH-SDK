#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MagicLeapSharedWorld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (0x03E0 - 0x0310)
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0310(0x0010) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNewLocalDataFromClients;                                // 0x0320(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              PinSelectionConfidenceThreshold;                          // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0334(0x00A4) MISSED OFFSET
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode"));
		return ptr;
	}


	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (0x02D8 - 0x0298)
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0298(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms    AlignmentTransforms;                                      // 0x02A8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSharedWorldDataUpdated;                                 // 0x02B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAlignmentTransformsUpdated;                             // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState"));
		return ptr;
	}


	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	struct FTransform CalculateXRCameraRootTransform();
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (0x0590 - 0x0578)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0578(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController"));
		return ptr;
	}


	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
