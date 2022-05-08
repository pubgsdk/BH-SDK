#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MoviePlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C
// 0x0079 (0x02F9 - 0x0280)
class UTBP_UI_MoviePlayer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      BlackBackground;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      MovieTexture;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMediaPlayer*                                AnimaticPlayer;                                           // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UFileMediaSource*                            MovieFile;                                                // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               PlayImmediately;                                          // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnClosed;                                                 // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class ATBP_MovieSound_C*                           SoundActor;                                               // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMediaPlaylist*                              Playlist;                                                 // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bCanSkipMovies;                                           // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	TArray<struct FKey>                                CancelKeys;                                               // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FKey>                                WaitingForRelease;                                        // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               WasMouseCursorShown;                                      // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C"));
		return ptr;
	}


	void UpdateCurrentDownKeys();
	void IsLastVideo(bool* bIsLastVideo);
	void SetCinematicState(bool InCinematic);
	void CancelPlayback();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void StartPlaying(bool* PlaySucceeded);
	void FinishedPlaying();
	void Construct();
	void EndReached();
	void FinishedLoading(const struct FString& OpenedUrl);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMenuBack();
	void ExecuteUbergraph_TBP_UI_MoviePlayer(int EntryPoint);
	void OnClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
