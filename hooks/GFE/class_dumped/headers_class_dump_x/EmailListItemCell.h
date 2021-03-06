/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class EmailListItem, UIButton, UIImageView, UILabel, UIView;

@interface EmailListItemCell : _ABAddressBookAddRecord
{
    float _defaultNibPreviewLabelHeight;
    BOOL _isInConversation;
    BOOL _showDateAsTime;
    BOOL _isMultiSelectMode;
    BOOL _selectedForDelete;
    BOOL _hasProblemsSendingEmail;
    BOOL _isSmimeEmailSecurityIconEnabled;
    EmailListItem *_emailListItem;
    id <EmailListItemCellDelegate> _delegate;
    UIView *_contentBackgroundView;
    UIView *_containerView;
    UIImageView *_iconImage;
    UIImageView *_icon2;
    UILabel *_subjectLabel;
    UILabel *_nameLabel;
    UILabel *_previewTextLabel;
    UILabel *_dateLabel;
    UIButton *_multiSelectButton;
    UIButton *_deleteButton;
    UIImageView *_numberBubble;
    UIView *_deleteButtonBackView;
}

+ (float)estimatedRowHeight;
- (void)setDeleteButtonBackView:(id)fp8;
- (id)deleteButtonBackView;
- (void)setNumberBubble:(id)fp8;
- (id)numberBubble;
- (void)setIsSmimeEmailSecurityIconEnabled:(BOOL)fp8;
- (BOOL)isSmimeEmailSecurityIconEnabled;
- (void)setDeleteButton:(id)fp8;
- (id)deleteButton;
- (void)setMultiSelectButton:(id)fp8;
- (id)multiSelectButton;
- (void)setDateLabel:(id)fp8;
- (id)dateLabel;
- (void)setPreviewTextLabel:(id)fp8;
- (id)previewTextLabel;
- (void)setNameLabel:(id)fp8;
- (id)nameLabel;
- (void)setSubjectLabel:(id)fp8;
- (id)subjectLabel;
- (void)setIcon2:(id)fp8;
- (id)icon2;
- (void)setIconImage:(id)fp8;
- (id)iconImage;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void)setContentBackgroundView:(id)fp8;
- (id)contentBackgroundView;
- (BOOL)isInConversation;
- (id)delegate;
- (void)setHasProblemsSendingEmail:(BOOL)fp8;
- (BOOL)hasProblemsSendingEmail;
- (void)setSelectedForDelete:(BOOL)fp8;
- (BOOL)selectedForDelete;
- (void)setIsMultiSelectMode:(BOOL)fp8;
- (BOOL)isMultiSelectMode;
- (void)setShowDateAsTime:(BOOL)fp8;
- (BOOL)showDateAsTime;
- (id)emailListItem;
- (void)setFonts;
- (void)setAccessibilityElements;
- (void)updateCellForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (unsigned int)numberOfItems;
- (void)setNumberOfMessages:(unsigned int)fp8;
- (void)setDelegate:(id)fp8;
- (void)handleEmailSecurityIconSmimePolicyChanged;
- (void)handleEmailSecurityIconUserPreferenceChanged:(id)fp8;
- (void)setMultiSelectMode:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setMultiSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setEmailListItem:(id)fp8;
- (void)setIsInConversation:(BOOL)fp8;
- (void)deleteAction:(id)fp8;
- (void)setSelectForDelete:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)removeAllAnimationsFromView:(id)fp8;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)toggleDeleteButtonForRecordNumber:(id)fp8 animated:(BOOL)fp12;
- (void)userDidExposeDeleteButton:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)setDefaultTextHighlightColor;
- (void)awakeFromNib;
- (void)removeKVOForEmailListItem:(id)fp8;
- (void)setupKVOForEmailListItem:(id)fp8;
- (void)updateBackgroundColor;
- (void)setupSecurityIcon;
- (void)teardownCommon;
- (void)dealloc;

@end

