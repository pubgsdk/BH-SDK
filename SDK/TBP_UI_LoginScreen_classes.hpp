#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LoginScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_LoginScreen.TBP_UI_LoginScreen_C
// 0x0330 (0x05C8 - 0x0298)
class UTBP_UI_LoginScreen_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BlackFade;                                                // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ErrorMessage;                                             // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_LicenseAgreement_Popup_C*            ExportGateDeniedPopup;                                    // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_LicenseAgreement_Popup_C*            ExportGatePopup;                                          // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_GetDevTicketSection_C*               GetDevTicketSection;                                      // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_LoginQueueSection_C*                 LoginQueueSection;                                        // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_LoginSection_C*                      LoginSection;                                             // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_LicenseAgreement_Popup_C*            ReAcceptLegalDocumentDeniedPopup;                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_LicenseAgreement_Popup_C*            ReAcceptLegalDocumentPopup;                               // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_RegistrationSection_C*               RegistrationSection;                                      // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             SectionSwitcher;                                          // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             StatusSwitcher;                                           // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber;                                  // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Vein1;                                                    // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Vein2;                                                    // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Vein3;                                                    // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_VerificationSection_C*               VerificationSection;                                      // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    WorkThrobber;                                             // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    LoginSucceeded;                                           // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnValidVersionDispatch;                                   // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnInvalidVersionDispatch;                                 // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTigerLoginQueueToken                       LoginQueueToken;                                          // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AccountLicenseAgreementTitle;                             // 0x0388(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AccountLicenseAgreementText;                              // 0x03A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               EnableLicenseAgreement;                                   // 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TMap<int, int>                                     ThirdPartyErrorsBoxMapping;                               // 0x03C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	TMap<int, struct FText>                            ThirdPartyErrorCodes;                                     // 0x0410(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	int                                                ErrorBoxIndex;                                            // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FText                                       AccountExportGateTitle;                                   // 0x0468(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AccountExportGateText;                                    // 0x0480(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     Subheader_TextFormatting;                                 // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     Subtitle_TextFormatting;                                  // 0x04A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     UL_TextFormatting;                                        // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     Bold_TextFormating;                                       // 0x04C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     EL_TextFormatting;                                        // 0x04D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FText                                       AccountLinkingPopupHeaderText;                            // 0x04E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       AccountLinkingPopupText;                                  // 0x0500(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<ETigerLegalDocumentType>                    CachedDocumentTypesToAccept;                              // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	ETigerLegalDocumentType                            CachedCurrentDocumentToAccept;                            // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	struct FSharkLoginResult                           Shark_Login_Result;                                       // 0x0530(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_LoginScreen.TBP_UI_LoginScreen_C"));
		return ptr;
	}


	void ConvertOSSValueToEShAccountChannelID(const struct FString& InOSSValue, EShAccountChannel* OutAccountChannelID);
	void DisplayAccountError(const struct FString& ErrorString, TEnumAsByte<ENUM_ErrorMessageDisplay> UI_Target);
	void GetReacceptLegalDocumentTitle(ETigerLegalDocumentType InDocumentType, struct FText* OutText);
	void EvaluateBanReason(unsigned char InBanReason, const struct FString& InBanDisplayString, struct FString* OutBanDisplayString);
	void ConvertBanEndsDisplayString(const struct FString& InBanEndsAt, unsigned char InBanReason, struct FString* OutBanEndDisplayString);
	void ShowExportGateWidget();
	void ShouldUseDevTicket(bool* UseDevTicket);
	void Try_Login_with_Login_Queue_Token(struct FTigerLoginQueueToken* InLoginQueueToken);
	void ClearError();
	void TryShowError(bool DelayMessage, const struct FText& Error, bool* No_Error);
	void EndWork(bool Success, const struct FText& Error);
	void StartWork();
	void ShowRegistrationScreen();
	void ShowLogInScreen();
	void ShowVerificationScreen(const struct FString& Email);
	void LogMeIn();
	void SetWidgetsEnabled(bool Enabled);
	void Error_25AA6E00485B8955EDA2B58041008BAC(const struct FTigerLoginQueueToken& LoginToken, const struct FTimespan& EstimatedWaitTime, const struct FString& ErrorMessage);
	void WaitTimeUpdated_25AA6E00485B8955EDA2B58041008BAC(const struct FTigerLoginQueueToken& LoginToken, const struct FTimespan& EstimatedWaitTime, const struct FString& ErrorMessage);
	void ReadyForLogin_25AA6E00485B8955EDA2B58041008BAC(const struct FTigerLoginQueueToken& LoginToken, const struct FTimespan& EstimatedWaitTime, const struct FString& ErrorMessage);
	void OnFailure_0C916F24458ECAF0F5D72AB2290CFD13(const struct FString& ErrorMsg);
	void OnSuccess_0C916F24458ECAF0F5D72AB2290CFD13(const struct FString& ErrorMsg);
	void OnFailure_89F6FC8743D7E87F32AEDC880A350B4B(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString);
	void OnSuccess_89F6FC8743D7E87F32AEDC880A350B4B(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString);
	void OnFailure_B7F09C0446D23DC02934EAAB40943A50(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString);
	void OnSuccess_B7F09C0446D23DC02934EAAB40943A50(const struct FLoginResultSharkmob& Result, const struct FString& ErrorString);
	void OnCharacterSelected();
	void OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated);
	void OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo);
	void OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters);
	void ShowErrorMessage(bool DelayMessage, const struct FText& ErrorMessage);
	void CheckIfVersionIsValid();
	void OnGetValidGameVersionResult(ETigerVersionIsValidResult Result);
	void SharkmobAccountLoginResult(const struct FSharkLoginResult& InResult);
	void BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_2_Back__DelegateSignature();
	void BndEvt__LoginSection_K2Node_ComponentBoundEvent_3_SignIn__DelegateSignature();
	void BndEvt__VerificationSection_K2Node_ComponentBoundEvent_6_BackAction__DelegateSignature();
	void BndEvt__VerificationSection_K2Node_ComponentBoundEvent_7_RegisterAction__DelegateSignature();
	void BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_5_CreateAccount__DelegateSignature();
	void BndEvt__LoginSection_K2Node_ComponentBoundEvent_0_CreateAccount__DelegateSignature();
	void Construct();
	void BndEvt__GetDevTicketSection_K2Node_ComponentBoundEvent_9_SignIn__DelegateSignature();
	void QueueForLogin();
	void BndEvt__LoginQueueSection_K2Node_ComponentBoundEvent_10_Retry__DelegateSignature();
	void BndEvt__TBP_UI_LicenseAgreement_Popup_K2Node_ComponentBoundEvent_11_OnDecisionMade__DelegateSignature(bool Agreed);
	void BndEvt__LoginSection_K2Node_ComponentBoundEvent_12_RecoverPassword__DelegateSignature();
	void RegistrationServerErrorCallback(const struct FText& InError);
	void VerificationServerErrorCallback(const struct FText& InError);
	void ClearButtonErrors();
	void PreConstruct(bool IsDesignTime);
	void ResendVerificationCode();
	void OnExitClicked_LoginSection();
	void OnExitClicked_LoginQueue();
	void OnExitClicked_Registration();
	void OnExitClicked_DevTicket();
	void ExportGateAgreementDenied();
	void OnGetUserPrivileges();
	void OnLegalDocumentAcceptanceResult(TArray<ETigerLegalDocumentType> InDocumentTypes);
	void OnLegalDocumentOfTypeAccepted(ETigerLegalDocumentType InAcceptedDocumentType);
	void PromptNextLegalDocument();
	void ShowLegalDocumentPopupOfType(ETigerLegalDocumentType InDocumentType);
	void AgreedOrDisagreedToLegalDocument(bool Agreed);
	void DeniedPopupDecisionMade(bool Agreed);
	void EvaluateLoginResult(const struct FLoginResultSharkmob& InResult, const struct FString& ErrorString, bool LoginSuccess, bool IsNewAccount);
	void ExecuteUbergraph_TBP_UI_LoginScreen(int EntryPoint);
	void OnInvalidVersionDispatch__DelegateSignature();
	void OnValidVersionDispatch__DelegateSignature();
	void LoginSucceeded__DelegateSignature(TArray<struct FTigerPersistentPlayerCharacter>* AvailableCharacters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
