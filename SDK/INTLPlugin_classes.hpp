#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "INTLPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class INTLPlugin.INTLBaseUserWidget
// 0x0008 (0x0268 - 0x0260)
class UINTLBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class INTLPlugin.INTLBaseUserWidget"));
		return ptr;
	}

};


// Class INTLPlugin.INTLOutputUtility
// 0x0000 (0x0028 - 0x0028)
class UINTLOutputUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class INTLPlugin.INTLOutputUtility"));
		return ptr;
	}


	static void FormatNoticeRet(const struct FINTLNoticeResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
	static void FormatBaseRet(const struct FINTLBaseResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
	static void FormatAuthRet(const struct FINTLAuthResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
};


// Class INTLPlugin.INTLPluginObserver
// 0x0000 (0x0028 - 0x0028)
class UINTLPluginObserver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class INTLPlugin.INTLPluginObserver"));
		return ptr;
	}


	void OnWebViewResult(const struct FINTLWebViewResult& Ret);
	void OnUpdateStartRepoNewVersionInfoResult(const struct FINTLUpdateStartRepoNewVersionInfo& Ret);
	void OnUpdateResult(const struct FINTLUpdateResult& Ret);
	void OnUpdateProgressResult(const struct FINTLUpdateProgress& Ret);
	void OnUpdateOptionalRepoInitResult(const struct FINTLUpdateOptionalRepoInitResult& Ret);
	void OnPushResult(const struct FINTLPushResult& Ret);
	void OnPushBaseResult(const struct FINTLBaseResult& Ret);
	void OnNoticeRequestData(const struct FINTLNoticeResult& Ret);
	void OnIPInfoResult(const struct FINTLLBSIPInfoResult& Ret);
	void OnIDTokenResult(const struct FINTLIDTokenResult& Ret);
	void OnFriendResult(const struct FINTLFriendResult& Ret);
	void OnFriendBaseResult(const struct FINTLBaseResult& Ret);
	void OnExtendResult(const struct FINTLExtendResult& Ret);
	void OnDNSResult(const struct FINTLDNSResult& Ret);
	void OnDismissLoginUI(bool Canceled);
	void OnDirTreeResult(const struct FINTLDirTreeResult& Ret);
	void OnDeviceLevelResult(const struct FINTLDeviceLevelResult& Ret);
	void OnCutoutResult(const struct FCutoutInfoResult& Ret);
	void OnCustomerResult(const struct FINTLCustomerResult& Ret);
	void OnComplianceResult(const struct FINTLComplianceResult& Ret);
	void OnAuthResult(const struct FINTLAuthResult& Ret);
	void OnAuthBaseResult(const struct FINTLBaseResult& Ret);
	void OnAccountResult(const struct FINTLAccountResult& Ret);
};


// Class INTLPlugin.INTLSDKAPI
// 0x0000 (0x0028 - 0x0028)
class UINTLSDKAPI : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class INTLPlugin.INTLSDKAPI"));
		return ptr;
	}


	static bool UpdateStop(int RepoID, int TaskID);
	static bool UpdateStart(const struct FINTLUpdateInitInfo& Info);
	static bool UpdateContinue(int RepoID);
	static bool UpdateConfig(TMap<struct FString, struct FString> Cfg, const struct FString& Project);
	static void UnregisterPush(const struct FString& Channel);
	static bool Unbind(EINTLLoginChannel Channel, const struct FString& UID, const struct FString& ExtraJson);
	static void ShutDown();
	static bool ShowAccountPicker();
	static bool Share(const struct FINTLFriendReqInfo& Info, const struct FString& Channel);
	static void SetTag(const struct FString& Channel, const struct FString& Tag);
	static void SetSessionExtraParam(const struct FString& extra_json);
	static void SetDeviceLevel(int Level);
	static void SetCrashUserValue(const struct FString& Key, const struct FString& Value);
	static void SetCrashUserId(const struct FString& userId);
	static void SetCrashCallback();
	static void SetBuglyAppVersion(const struct FString& appVersion);
	static void SetAccountInfo(EINTLLoginChannel Channel, int ChannelID, const struct FString& LangType, int AccountPlatType);
	static void SetAccount(const struct FString& Channel, const struct FString& Account);
	static bool SendMessage(const struct FINTLFriendReqInfo& Info, const struct FString& Channel);
	static bool ResetPasswordWithVerifyCode(const struct FString& Account, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson);
	static bool ResetPasswordWithOldPassword(const struct FString& Account, const struct FString& OldPassword, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson);
	static bool ResetGuest();
	static bool RequestVerifyCode(const struct FString& Account, EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	static void RequestTrackingAuthorization();
	static void RequestIPInfo();
	static void ReportPayStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap);
	static void ReportLoginStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap);
	static void ReportException(int Type, const struct FString& ExceptionName, const struct FString& ExceptionMsg, const struct FString& ExceptionStack, TMap<struct FString, struct FString> ExtInfo);
	static void ReportEvent(const struct FString& EventName, TMap<struct FString, struct FString> ParamsMap, const struct FString& SpecificChannel, const struct FString& ExtraJson);
	static void ReportCustomEventStep(const struct FString& EventName, int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap);
	static void ReportBinary(const struct FString& EventName, const struct FString& Data, int Length, const struct FString& SpecificChannel);
	static void RemoveObserver(const TScriptInterface<class UINTLPluginObserver>& Observer);
	static void RegisterPush(const struct FString& Channel, const struct FString& Account);
	static bool Register(const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FINTLAccountProfile& userProfile);
	static bool QueryVerifyCodeStatus(const struct FString& Account, const struct FString& VerifyCode, EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	static void QueryUserNameStatus(const struct FString& UserName);
	static bool QueryUserInfo();
	static bool QueryRegisterStatus(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	static bool QueryLegalDocumentsAcceptedVersion();
	static bool QueryIsReceiveEmail(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	static void QueryIsEEA(const struct FString& Region);
	static void QueryIpByHost(const struct FString& Host);
	static void QueryIDToken();
	static bool QueryFriends(EINTLLoginChannel Channel, int Page, int Count, bool IsInGame, const struct FString& ExtraJson);
	static void QueryDirTree(int TreeId);
	static void QueryDirNode(int TreeId, int NodeId);
	static void QueryDeviceLevel();
	static void QueryDataProtectionAcceptance();
	static bool QueryCanBind(int ChannelID, int AccountPlatType, const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	static bool QueryActiveUser();
	static bool QueryAccountProfile();
	static void PostNetworkLatencyInSession(int LatencyMs);
	static void PostFrameTimeInSession(float DeltaSeconds);
	static void OpenUrl(const struct FString& URL, EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, const struct FString& ExtraJson);
	static bool OnTickEvent();
	static struct FString NoticeRequestData(const struct FString& Region, const struct FString& LangType, const struct FString& ExtraJson);
	static bool ModifyProfile(const struct FINTLAccountProfile& userProfile);
	static bool ModifyLegalDocumentsAcceptedVersion(const struct FString& acceptedVersionsJson);
	static bool ModifyDownloadPriority(int RepoID, int TaskID, int DownloadPriority);
	static void ModifyDataProtectionAcceptance(const struct FString& PPVersion, const struct FString& TOSVersion);
	static bool ModifyAccountWithVerifyCode(const struct FString& OldAccount, const struct FString& OldAccountVerifyCode, const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson);
	static bool ModifyAccountWithPassword(const struct FString& OldAccount, const struct FString& OldPhoneAreaCode, const struct FString& Password, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson);
	static bool ModifyAccountWithLoginState(const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson);
	static void MarkSessionLoad(const struct FString& SessionName, const struct FString& extra_json);
	static void MarkSessionClosed();
	static bool Logout(EINTLLoginChannel Channel);
	static bool LoginWithVerifyCode(EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& PermissionList);
	static bool LoginWithPassword(EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& PhoneAreaCode, const struct FString& PermissionList);
	static bool LoginWithMappedChannel(EINTLLoginChannel Channel, const struct FString& LoginMode, const struct FString& Permissions);
	static bool LoginWithChannel(EINTLLoginChannel Channel, const struct FString& LoginMode);
	static bool LoginWithBoundChannel(EINTLLoginChannel Channel, const struct FString& LoginMode);
	static bool Login(EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson);
	static void LogCrashInfo(EINTLCrashLevel Level, const struct FString& Tag, const struct FString& Log);
	static void LoadCutoutData();
	static void LaunchLoginUI();
	static bool LaunchCustomerUI(const struct FINTLCustomerUserProfile& userProfile);
	static bool LaunchAccountUI(int Type, const struct FString& ExtraJson);
	static bool IsAppInstalled(const struct FString& Channel, const struct FString& ExtraJson);
	static void InitAnalytics();
	static void Init();
	static struct FString GetSDKVersion();
	static struct FString GetIpByHost(const struct FString& Host);
	static struct FString GetInstanceIDAsync(const struct FString& Channel);
	static struct FString GetInstanceID(const struct FString& Channel);
	static bool GetIDTokenResult(struct FINTLIDTokenResult* jwtRet);
	static struct FString GetEncryptUrl(const struct FString& URL);
	static int GetDeviceLevel();
	static struct FString GetCurrentResourceVersion();
	static struct FString GetCurrentAppVersion();
	static struct FString GetConfig(const struct FString& Key, const struct FString& DefaultVal, const struct FString& Project);
	static bool GetAuthResult(struct FINTLAuthResult* LoginRet);
	static struct FString ExtendInvoke(EINTLLoginChannel Channel, const struct FString& ExtendMethodName, const struct FString& ParamsJson);
	static int DownloadOptionalRepoFiles(int RepoID, int DownloadPriority, TArray<struct FString> FilesPath);
	static void DismissLoginUI(bool Canceled);
	static void DeleteTag(const struct FString& Channel, const struct FString& Tag);
	static void DeleteLocalNotifications(const struct FString& Key);
	static void DeleteAccount(const struct FString& Channel, const struct FString& Account);
	static bool ComplianceSetUserProfile(const struct FString& GameID, const struct FString& OpenId, const struct FString& Token, int ChannelID, const struct FString& Region);
	static void ComplianceSetParentCertificateStatus(EComplianceParentCertificateStatus Status);
	static void ComplianceSetEUAgreeStatus(EComplianceAgreeStatus Status);
	static void ComplianceSetAdulthood(EComplianceAgeStatus Status);
	static void ComplianceSendEmail(const struct FString& Email, const struct FString& UserName);
	static void ComplianceQueryUserStatus();
	static void ComplianceCommitBirthday(int BirthdayYear, int BirthdayMonth, int BirthdayDay);
	static void CollectionStop();
	static void CollectionResume();
	static void ClearLocalNotifications(const struct FString& Channel);
	static TArray<struct FINTLUpdateOptionalRepoFilesStatus> CheckOptionalRepoFiles(int RepoID, TArray<struct FString> FilesPath);
	static bool CheckActiveUser();
	static void CallJS(const struct FString& JsonJsParam);
	static bool BuildMapWithLoggedinChannel();
	static bool BindWithLoggedinChannel();
	static bool Bind(EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson);
	static bool AutoLogin();
	static void AddObserver(const TScriptInterface<class UINTLPluginObserver>& Observer);
	static void AddLocalNotificationIOS(const struct FString& Channel, const struct FINTLLocalNotificationIOS& LocalNotification);
	static void AddLocalNotification(const struct FString& Channel, const struct FINTLLocalNotification& LocalNotification);
};


// Class INTLPlugin.INTLUtility
// 0x0000 (0x0028 - 0x0028)
class UINTLUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class INTLPlugin.INTLUtility"));
		return ptr;
	}


	static bool Regular(const struct FString& Str, const struct FString& Reg);
	static int RefreshCurToastCnt(int ChangeCnt);
	static int GetNewToastOrder();
	static void ForceCrash();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
