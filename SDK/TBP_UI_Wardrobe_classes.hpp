#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Wardrobe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Wardrobe.TBP_UI_Wardrobe_C
// 0x0515 (0x09F5 - 0x04E0)
class UTBP_UI_Wardrobe_C : public UTigerWardrobeUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowItemContainer;                                        // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            HideFilterBox;                                            // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowFilterBox;                                            // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    AccessoryCategoryButton;                                  // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BlackBackground;                                          // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    BodyCategoryButton;                                       // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    BodyTypeCategoryButton;                                   // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    CardBackgroundCategoryButton;                             // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              CardTabWidget;                                            // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Box_C*                               CategoryBox;                                              // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              CharacterTabWidget;                                       // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             ContainerSwitcher;                                        // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Line_C*                              CurrencyTopLine;                                          // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EmoteCategoryButton;                                      // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_EquipWheel_C*                        EquipWheel;                                               // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyebrowCategoryButton;                                    // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyebrowColorCategoryButton;                               // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyebrowTypeCategoryButton;                                // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyeColorCategoryButton;                                   // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    FacialHairCategoryButton;                                 // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    FacialHairColorCategoryButton;                            // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    FacialHairTypeCategoryButton;                             // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    GlassesCategoryButton;                                    // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HairCategoryButton;                                       // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HairColorCategoryButton;                                  // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HairTypeCategoryButton;                                   // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HatCategoryButton;                                        // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HeadCategoryButton;                                       // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    IconCategoryButton;                                       // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_GameMenu_Gamepad;                             // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Select_Gamepad;                               // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Select_Keyboard;                              // 0x05E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_OutfitItemContainer_C*               ItemContainer;                                            // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_OutfitVendorTooltip_C*               ItemTooltip;                                              // 0x05F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   LandingPage_CloseButton;                                  // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    MakeupCategoryButton;                                     // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    MaskCategoryButton;                                       // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              MiscTabWidget;                                            // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    OutfitCategoryButton;                                     // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    PiercingCategoryButton;                                   // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CurrentHardCurrencyText_C*           PlayerHardCurrencyText;                                   // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      PlayerSoftCurrencyText;                                   // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                ShopCanvas;                                               // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    SkinColorCategoryButton;                                  // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              TabBox;                                                   // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    TattooCategoryButton;                                     // 0x0658(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Info_C*                TBP_UI_CharacterCard_Info;                                // 0x0660(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          TBP_UI_CheckBox;                                          // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_Vertical_C*                  TBP_UI_Divider_Vertical;                                  // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                         // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_PlayerCard_C*                        TBP_UI_PlayerCard;                                        // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                    // 0x0688(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Turn;                                                     // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              WardrobeTabWidget;                                        // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              WeaponTabWidget;                                          // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsBuyingItem;                                            // 0x06A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class UTBP_UI_BuyItemsOverlay_C*                   OverlayUI;                                                // 0x06B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTigerVendorStoreCategoryItem               CurrentItemToBuy;                                         // 0x06B8(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance)
	struct FTigerPersistentOutfitSetup                 CurrentOutfitSetup;                                       // 0x0750(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance)
	bool                                               bEquipBoughtItem;                                         // 0x0788(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class UClass* /*UTBP_PartOfHead_NullItem_C*/       FakePartOfHeadClass;                                      // 0x0790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        DefaultOverrideItem;                                      // 0x0798(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FTigerVendorStoreCategoryItem               SelectedItem;                                             // 0x07C0(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                SelectedSlot;                                             // 0x0858(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	class ATBP_RewardPreview_Outfit_C*                 Item_Preview;                                             // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            User_Camera;                                              // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            Close_Camera;                                             // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            Target_Default_Camera;                                    // 0x0878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     User_Camera_Original_Position;                            // 0x0880(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     User_Camera_New_Position;                                 // 0x088C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     DefaultCamera_Target_Position;                            // 0x0898(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CloseCamera_Position;                                     // 0x08A4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Target_Camera_Position;                                   // 0x08B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	TSoftClassPtr<class UClass>                        NullSoftPath;                                             // 0x08C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FCameraFocusSettings                        FocusSettingsDefault;                                     // 0x08E8(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FCameraFocusSettings                        FocusSettingsClose;                                       // 0x0940(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               UseCameraIsValid;                                         // 0x0998(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               TeleportCamera;                                           // 0x0999(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CategoryIsPartOfHeadCustomization;                        // 0x099A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               OnClick_PanButtonIsDown;                                  // 0x099B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)
	bool                                               ItemPreviewIsValid;                                       // 0x099C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	float                                              CameraEmotePreviewZPoint;                                 // 0x09A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CameraZTreshhold;                                         // 0x09A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                 // 0x09A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OnClick_YPos;                                             // 0x09AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OnClick_XPos;                                             // 0x09B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Saved_Rotation_Distance;                                  // 0x09B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Rotation_Distance_To_Move;                                // 0x09B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PaperdollTargetRotation;                                  // 0x09BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Mouse_Wheel_Delta;                                        // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Zoom_Level_Target;                                        // 0x09C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Zoom_Level;                                               // 0x09C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PaperdollRotation;                                        // 0x09CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsUsingGamepad;                                           // 0x09D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	float                                              RS_Axis_X;                                                // 0x09D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RS_Axis_Y;                                                // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PanDistanceToMove;                                        // 0x09DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetCameraPanPosition;                                  // 0x09E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SavedPanPosition;                                         // 0x09E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxPanUp;                                                 // 0x09E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxPanDown;                                               // 0x09EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DPad_Pan_UpDown;                                          // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETigerPersistentStoreCategory                      CurrentWardrobeCategory;                                  // 0x09F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Wardrobe.TBP_UI_Wardrobe_C"));
		return ptr;
	}


	void ShowTurnInputBasedOnWardrobeCategory();
	void ServerEquipItem(const struct FTigerVendorStoreCategoryItem& InItemToEquip, class ATigerElysiumPlayerState* InElysiumPlayer, int InSlot);
	void SelectTabBasedOnIndex();
	void Reset_Camera();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetEmotePreviewZPoint();
	void UpdatePlayerCardVisibility(ETigerPersistentStoreCategory InCategory);
	void ShouldShowFacialHairCategory(bool* OutShow);
	void HideEyebrowsForNosferatu();
	void SetDefaultOverrideItem(TArray<struct FTigerVendorStoreCategoryItem> InItems);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ShowItemTooltip(const struct FTigerVendorStoreCategoryItem& InItem);
	void HideFilters();
	void PreviewOutfitMaterial();
	void GetPlayerOutfitSetup(struct FTigerPersistentOutfitSetup* OutfitSetup);
	void On_Item_Selected(struct FTigerVendorStoreCategoryItem* StoreItem);
	void OnCloseVendorWidget(bool* bShouldRemoveWidget);
	void OnCategorySelected(class UTigerVendorStoreCategory* SelectedCategory);
	void ResetPlayerApperance();
	void OnOverlayClosed();
	void SaveCharacterApperance(struct FTigerPersistentOutfitSetup* PersistentOutfitSetup);
	void BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature();
	void BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature();
	void BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature();
	void BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature();
	void BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature();
	void BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature();
	void BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature();
	void BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature();
	void BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature();
	void OnSelectedSlot();
	void BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature();
	void OnSlotSelectionCanceled();
	void BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature();
	void BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature();
	void BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature();
	void BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature();
	void BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature();
	void BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature();
	void BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature();
	void BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature();
	void OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem);
	void Construct();
	void OnGotStoreCategories();
	void OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item);
	void BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature();
	void SetNewCardLocally(const struct FTigerPersistentPlayerCardData& InCard);
	void BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature();
	void BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature();
	void Set_is_Using_Gamepad(bool bNewIsProbablyUsingGamepad);
	void OnBodyTypeChanged(ETigerGender InBodyType);
	void Toggle_Zoom();
	void BndEvt__TBP_UI_Wardrobe_LandingPage_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnPlayerInventoryUpdated();
	void BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnBackgroundSceneShown();
	void OnClose();
	void OnOpen();
	void SetNewAppearanceLocally(const struct FTigerPreviewerData& InPreviewerAppearance);
	void UpdateCloseButton();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature();
	void BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature();
	void BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature();
	void OnItemUnhovered();
	void BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature();
	void ShowCategoryItems(ETigerPersistentStoreCategory Category);
	void OnCategoryItemsReceived(ETigerPersistentStoreCategory CategoryType, TArray<struct FTigerVendorStoreCategoryItem> CategoryItems);
	void OnInventoryActivated();
	void On_Mouse_Button_Up();
	void Track_Start_Pos_on_Click(const struct FPointerEvent& MouseData);
	void BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature();
	void OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_C* OutfitItem);
	void ExecuteUbergraph_TBP_UI_Wardrobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
