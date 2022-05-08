#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RegistrationSection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C
// 0x0380 (0x05E0 - 0x0260)
class UTBP_UI_RegistrationSection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_Button_CTA_C*                        Button_CTA_RegisterButton;                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                CountrySpecificExtras;                                    // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   DateofBirth_Text;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_AdvancedTextBox_C*                   EmailBoxRegistration;                                     // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         KoreaCheckbox1;                                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         KoreaCheckbox2;                                           // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         KoreaCheckbox3;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         KoreaCheckbox4;                                           // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_AdvancedTextBox_C*                   PasswordBoxRegistration;                                  // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Regitster_Text;                                           // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_AdvancedTextBox_C*                   RepeatPasswordBoxRegistration;                            // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                           // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider_6;                                         // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber_Email;                            // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber_Registration;                     // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber_Username;                         // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         TBP_UI_Registration_Checkbox_Newsletter;                  // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         TBP_UI_Registration_Checkbox_PrivacyPolicy;               // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckboxWithClickabelText_C*         TBP_UI_Registration_Checkbox_TermsOfService;              // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_Agreement;                       // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_Country;                         // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_Date;                            // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_EmailRegistration;               // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_KoreaExtras_2;                   // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_KoreaExtras_3;                   // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_KoreaExtras_4;                   // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_KoreaExtras_5;                   // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_PasswordRegistration;            // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_Register;                        // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallErrorMessage_C*                 TBP_UI_SmallErrorMessage_UsernameRegistration;            // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    TBP_UI_StyledComboBox_Country;                            // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    TBP_UI_StyledComboBox_Day;                                // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    TBP_UI_StyledComboBox_Month;                              // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    TBP_UI_StyledComboBox_Year;                               // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TextButton_C*                        TBP_UI_TextButton_ExitGame;                               // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TextButton_C*                        TBP_UI_TextButton_SignIn;                                 // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TOS_PP_Popup_C*                      TBP_UI_TOS_PP_Popup;                                      // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_AdvancedTextBox_C*                   UsernameBoxRegistration;                                  // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    CreateAccount;                                            // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Back;                                                     // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bYearSelected;                                            // 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bMonthSelected;                                           // 0x03B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bCountrySelected;                                         // 0x03BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bDaySelected;                                             // 0x03BB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<struct FText>                               Countries;                                                // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                RegionId;                                                 // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FText                                       EmailUserChangeRevision;                                  // 0x03D8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       UsernameUserChangeRevision;                               // 0x03F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bUserNameAvailable;                                       // 0x0408(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bEmailAvailable;                                          // 0x0409(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bPasswordEnteredCorrectly;                                // 0x040A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bDateEnteredCorrectly;                                    // 0x040B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TMap<struct FString, bool>                         CachedEmailResponses;                                     // 0x0410(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, bool>                         CachedUsernameResponses;                                  // 0x0460(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UTBP_UI_LoginScreen_C*                       LoginScreen;                                              // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FString, int>                          CountryDropDownKeyIndices;                                // 0x04B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                CurrentKeyIndex;                                          // 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    ExitGame;                                                 // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bTermsOfServiceAccepted;                                  // 0x0520(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bPrivacyPolicyAccepted;                                   // 0x0521(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bNewsletterAccepted;                                      // 0x0522(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bKoreaCheckbox1Accepted;                                  // 0x0523(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bKoreaCheckbox2Accepted;                                  // 0x0524(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bKoreaCheckbox3Accepted;                                  // 0x0525(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bKoreaCheckbox4Accepted;                                  // 0x0526(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0527(0x0001) MISSED OFFSET
	struct FString                                     Subheader_TextFormatting;                                 // 0x0528(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     Subtitle_TextFormatting;                                  // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     UL_TextFormatting;                                        // 0x0548(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     Bold_TextFormating;                                       // 0x0558(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     EL_TextFormatting;                                        // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TimeoutTimerHandle;                                       // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bCountrySelectedKorea;                                    // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	TMap<struct FString, int>                          CachedUsernameResponsesProfanity;                         // 0x0588(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                UsernameTimeoutTimerHandle;                               // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C"));
		return ptr;
	}


	void UsernameNotInPassword(bool* OutError);
	void GetCountryShouldShowExportGate(bool* OutShouldShowExportGate);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void CheckAgeRestrictionDirectlyByYearSelection();
	void GetCountryRegionId(int* OutRegionId);
	void ValidatePasswordEntry(bool* OutCorrectlyEntered);
	void CheckRegistrationFormReady();
	void VerifyDateOfBirth(bool* bValid, struct FText* Message);
	void GetEnteredDateOfBirth(bool* IsValidDate, struct FDateTime* DateOfBirth);
	void MakeArray(int FirstIndex, int LastIndex, bool InvertList, TArray<struct FText>* NewParam);
	void Verify(struct FText* Error);
	struct FString GetEnteredEmail();
	void PopulateComboBox(class UComboBoxString* InComboBox, int FirstOption, int LastOption, bool Reverse);
	void GetEnteredDetails(const struct FString& Verification_Code, struct FSharkAccountRegistrationData* Registration_Data);
	void OnFailure_97305E0F48D8BC638754BE97B048207B(bool bEmailAvailable, const struct FString& ErrorMessage);
	void OnSuccess_97305E0F48D8BC638754BE97B048207B(bool bEmailAvailable, const struct FString& ErrorMessage);
	void OnFailure_47FEBBC041B668BCB406448A43821565(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString);
	void OnSuccess_47FEBBC041B668BCB406448A43821565(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString);
	void OnFailure_FE7265334A5769C9FEF0CCB5E78C58E0(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString);
	void OnSuccess_FE7265334A5769C9FEF0CCB5E78C58E0(bool bUserNameAvailable, bool bUserNameContainsProfanity, const struct FString& ErrorString);
	void OnFailure_08A67A8E428B9588EDCCE9BE9CC66E26(bool bEmailAvailable, const struct FString& ErrorMessage);
	void OnSuccess_08A67A8E428B9588EDCCE9BE9CC66E26(bool bEmailAvailable, const struct FString& ErrorMessage);
	void Construct();
	void BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__UsernameBox_K2Node_ComponentBoundEvent_0_On_Text_Settled__DelegateSignature(const struct FText& Text);
	void BndEvt__EmailBox_K2Node_ComponentBoundEvent_2_On_Text_Settled__DelegateSignature(const struct FText& Text);
	void BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_On_Text_Settled__DelegateSignature(const struct FText& Text);
	void BndEvt__RepeatPasswordBox_K2Node_ComponentBoundEvent_5_On_Text_Settled__DelegateSignature(const struct FText& Text);
	void BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_StyledComboBox_Day_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__TBP_UI_StyledComboBox_Month_K2Node_ComponentBoundEvent_7_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__TBP_UI_StyledComboBox_Year_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void UsernameAvailabilityCallback(bool InAvailable, const struct FText& InErrorText, bool InProfanity);
	void EmailAvailabilityCallback(bool InAvailable, const struct FText& InErrorText);
	void BndEvt__TBP_UI_StyledComboBox_Country_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__EmailBox_K2Node_ComponentBoundEvent_11_On_Text_Changed__DelegateSignature();
	void BndEvt__UsernameBox_K2Node_ComponentBoundEvent_12_On_Text_Changed__DelegateSignature();
	void StartEmailTimeOutTimer();
	void StopEmailTimeOutTimer();
	void Timeout();
	void ShowTermsOfService();
	void ShowPrivacyPolicy();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void DoubleCheckPasswordAfterUpdatedUsername();
	void CheckIfShouldDoubleCheckPasswordField();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_13_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_14_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_15_OnClickedText__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_16_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_17_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_18_OnClickedText__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_19_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_20_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_21_OnClickedText__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_22_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_23_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_24_OnClickedText__DelegateSignature();
	void ShowNewsletterAgreement();
	void ExitDueToTimeOut(bool InAvailable, const struct FText& InErrorText);
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_25_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_26_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_27_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_28_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_29_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_30_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_31_OnClickedPopupRequirement__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_32_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_33_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_34_OnClickedText__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_35_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_36_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_37_OnClickedText__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_38_OnChecked_true__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_39_OnChecked_false__DelegateSignature();
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_40_OnClickedText__DelegateSignature();
	void ResetAllCheckBoxes();
	void QueryUsernameRegisterCallback(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, const struct FString& InUsername);
	void StopUsernameTimeoutTimer();
	void StartUsernameTimeOutTimer();
	void UsernameTimeout();
	void UsernameExitDueToTimeout(bool bInAvailable, const struct FText& InErrorText);
	void GetLegalTexts();
	void ExecuteUbergraph_TBP_UI_RegistrationSection(int EntryPoint);
	void ExitGame__DelegateSignature();
	void Back__DelegateSignature();
	void CreateAccount__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
