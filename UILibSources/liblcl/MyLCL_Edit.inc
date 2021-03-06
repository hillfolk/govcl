
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Edit_Create(AOwner: TComponent): TEdit; extdecl;
begin
  Result :=  TEdit.Create(AOwner);
end;

procedure Edit_Free(AObj: TEdit); extdecl;
begin
  AObj.Free;
end;

procedure Edit_Clear(AObj: TEdit); extdecl;
begin
  AObj.Clear;
end;

procedure Edit_ClearSelection(AObj: TEdit); extdecl;
begin
  AObj.ClearSelection;
end;

procedure Edit_CopyToClipboard(AObj: TEdit); extdecl;
begin
  AObj.CopyToClipboard;
end;

procedure Edit_CutToClipboard(AObj: TEdit); extdecl;
begin
  AObj.CutToClipboard;
end;

procedure Edit_PasteFromClipboard(AObj: TEdit); extdecl;
begin
  AObj.PasteFromClipboard;
end;

procedure Edit_Undo(AObj: TEdit); extdecl;
begin
  AObj.Undo;
end;

procedure Edit_SelectAll(AObj: TEdit); extdecl;
begin
  AObj.SelectAll;
end;

function Edit_CanFocus(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure Edit_FlipChildren(AObj: TEdit; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Edit_Focused(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function Edit_HandleAllocated(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Edit_Invalidate(AObj: TEdit); extdecl;
begin
  AObj.Invalidate;
end;

procedure Edit_Realign(AObj: TEdit); extdecl;
begin
  AObj.Realign;
end;

procedure Edit_Repaint(AObj: TEdit); extdecl;
begin
  AObj.Repaint;
end;

procedure Edit_ScaleBy(AObj: TEdit; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Edit_SetBounds(AObj: TEdit; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Edit_SetFocus(AObj: TEdit); extdecl;
begin
  AObj.SetFocus;
end;

procedure Edit_Update(AObj: TEdit); extdecl;
begin
  AObj.Update;
end;

procedure Edit_BringToFront(AObj: TEdit); extdecl;
begin
  AObj.BringToFront;
end;

procedure Edit_ClientToScreen(AObj: TEdit; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Edit_ClientToParent(AObj: TEdit; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Edit_Dragging(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function Edit_HasParent(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure Edit_Hide(AObj: TEdit); extdecl;
begin
  AObj.Hide;
end;

function Edit_Perform(AObj: TEdit; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Edit_Refresh(AObj: TEdit); extdecl;
begin
  AObj.Refresh;
end;

procedure Edit_ScreenToClient(AObj: TEdit; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Edit_ParentToClient(AObj: TEdit; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Edit_SendToBack(AObj: TEdit); extdecl;
begin
  AObj.SendToBack;
end;

procedure Edit_Show(AObj: TEdit); extdecl;
begin
  AObj.Show;
end;

function Edit_GetTextBuf(AObj: TEdit; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Edit_GetTextLen(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

function Edit_FindComponent(AObj: TEdit; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Edit_GetNamePath(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Edit_Assign(AObj: TEdit; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function Edit_ClassType(AObj: TEdit): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Edit_ClassName(AObj: TEdit): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Edit_InstanceSize(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Edit_InheritsFrom(AObj: TEdit; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Edit_Equals(AObj: TEdit; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Edit_GetHashCode(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Edit_ToString(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Edit_GetAlign(AObj: TEdit): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure Edit_SetAlign(AObj: TEdit; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function Edit_GetAlignment(AObj: TEdit): TAlignment; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure Edit_SetAlignment(AObj: TEdit; AValue: TAlignment); extdecl;
begin
  AObj.Alignment := AValue;
end;

function Edit_GetAnchors(AObj: TEdit): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Edit_SetAnchors(AObj: TEdit; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function Edit_GetAutoSelect(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.AutoSelect;
end;

procedure Edit_SetAutoSelect(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.AutoSelect := AValue;
end;

function Edit_GetAutoSize(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Edit_SetAutoSize(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function Edit_GetBiDiMode(AObj: TEdit): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Edit_SetBiDiMode(AObj: TEdit; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Edit_GetBorderStyle(AObj: TEdit): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Edit_SetBorderStyle(AObj: TEdit; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Edit_GetCharCase(AObj: TEdit): TEditCharCase; extdecl;
begin
  Result :=  AObj.CharCase;
end;

procedure Edit_SetCharCase(AObj: TEdit; AValue: TEditCharCase); extdecl;
begin
  AObj.CharCase := AValue;
end;

function Edit_GetColor(AObj: TEdit): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure Edit_SetColor(AObj: TEdit; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function Edit_GetDoubleBuffered(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Edit_SetDoubleBuffered(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Edit_GetDragCursor(AObj: TEdit): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure Edit_SetDragCursor(AObj: TEdit; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function Edit_GetDragKind(AObj: TEdit): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure Edit_SetDragKind(AObj: TEdit; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function Edit_GetDragMode(AObj: TEdit): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure Edit_SetDragMode(AObj: TEdit; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function Edit_GetEnabled(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Edit_SetEnabled(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function Edit_GetFont(AObj: TEdit): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure Edit_SetFont(AObj: TEdit; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function Edit_GetHideSelection(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.HideSelection;
end;

procedure Edit_SetHideSelection(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.HideSelection := AValue;
end;

function Edit_GetMaxLength(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.MaxLength;
end;

procedure Edit_SetMaxLength(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.MaxLength := AValue;
end;

function Edit_GetNumbersOnly(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.NumbersOnly;
end;

procedure Edit_SetNumbersOnly(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.NumbersOnly := AValue;
end;

function Edit_GetParentColor(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure Edit_SetParentColor(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function Edit_GetParentFont(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Edit_SetParentFont(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function Edit_GetParentShowHint(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Edit_SetParentShowHint(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function Edit_GetPasswordChar(AObj: TEdit): Char; extdecl;
begin
  Result :=  AObj.PasswordChar;
end;

procedure Edit_SetPasswordChar(AObj: TEdit; AValue: Char); extdecl;
begin
  AObj.PasswordChar := AValue;
end;

function Edit_GetPopupMenu(AObj: TEdit): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Edit_SetPopupMenu(AObj: TEdit; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Edit_GetReadOnly(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.ReadOnly;
end;

procedure Edit_SetReadOnly(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.ReadOnly := AValue;
end;

function Edit_GetShowHint(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Edit_SetShowHint(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function Edit_GetTabOrder(AObj: TEdit): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Edit_SetTabOrder(AObj: TEdit; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function Edit_GetTabStop(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Edit_SetTabStop(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function Edit_GetText(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.Text);
end;

procedure Edit_SetText(AObj: TEdit; AValue: PChar); extdecl;
begin
  AObj.Text := AValue;
end;

function Edit_GetTextHint(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.TextHint);
end;

procedure Edit_SetTextHint(AObj: TEdit; AValue: PChar); extdecl;
begin
  AObj.TextHint := AValue;
end;

function Edit_GetVisible(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Edit_SetVisible(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure Edit_SetOnChange(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    EventClass.Remove(AObj, geChange);
    Exit;
  end;
  AObj.OnChange := @EventClass.OnChange;
  EventClass.Add(AObj, geChange, AEventId);
end;

procedure Edit_SetOnClick(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    EventClass.Remove(AObj, geClick);
    Exit;
  end;
  AObj.OnClick := @EventClass.OnClick;
  EventClass.Add(AObj, geClick, AEventId);
end;

procedure Edit_SetOnContextPopup(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    EventClass.Remove(AObj, geContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := @EventClass.OnContextPopup;
  EventClass.Add(AObj, geContextPopup, AEventId);
end;

procedure Edit_SetOnDblClick(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    EventClass.Remove(AObj, geDblClick);
    Exit;
  end;
  AObj.OnDblClick := @EventClass.OnDblClick;
  EventClass.Add(AObj, geDblClick, AEventId);
end;

procedure Edit_SetOnDragDrop(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    EventClass.Remove(AObj, geDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := @EventClass.OnDragDrop;
  EventClass.Add(AObj, geDragDrop, AEventId);
end;

procedure Edit_SetOnDragOver(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    EventClass.Remove(AObj, geDragOver);
    Exit;
  end;
  AObj.OnDragOver := @EventClass.OnDragOver;
  EventClass.Add(AObj, geDragOver, AEventId);
end;

procedure Edit_SetOnEndDrag(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    EventClass.Remove(AObj, geEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := @EventClass.OnEndDrag;
  EventClass.Add(AObj, geEndDrag, AEventId);
end;

procedure Edit_SetOnEnter(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    EventClass.Remove(AObj, geEnter);
    Exit;
  end;
  AObj.OnEnter := @EventClass.OnEnter;
  EventClass.Add(AObj, geEnter, AEventId);
end;

procedure Edit_SetOnExit(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    EventClass.Remove(AObj, geExit);
    Exit;
  end;
  AObj.OnExit := @EventClass.OnExit;
  EventClass.Add(AObj, geExit, AEventId);
end;

procedure Edit_SetOnKeyDown(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    EventClass.Remove(AObj, geKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := @EventClass.OnKeyDown;
  EventClass.Add(AObj, geKeyDown, AEventId);
end;

procedure Edit_SetOnKeyPress(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    EventClass.Remove(AObj, geKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := @EventClass.OnKeyPress;
  EventClass.Add(AObj, geKeyPress, AEventId);
end;

procedure Edit_SetOnKeyUp(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    EventClass.Remove(AObj, geKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := @EventClass.OnKeyUp;
  EventClass.Add(AObj, geKeyUp, AEventId);
end;

procedure Edit_SetOnMouseDown(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    EventClass.Remove(AObj, geMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := @EventClass.OnMouseDown;
  EventClass.Add(AObj, geMouseDown, AEventId);
end;

procedure Edit_SetOnMouseEnter(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    EventClass.Remove(AObj, geMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := @EventClass.OnMouseEnter;
  EventClass.Add(AObj, geMouseEnter, AEventId);
end;

procedure Edit_SetOnMouseLeave(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    EventClass.Remove(AObj, geMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := @EventClass.OnMouseLeave;
  EventClass.Add(AObj, geMouseLeave, AEventId);
end;

procedure Edit_SetOnMouseMove(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    EventClass.Remove(AObj, geMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := @EventClass.OnMouseMove;
  EventClass.Add(AObj, geMouseMove, AEventId);
end;

procedure Edit_SetOnMouseUp(AObj: TEdit; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    EventClass.Remove(AObj, geMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := @EventClass.OnMouseUp;
  EventClass.Add(AObj, geMouseUp, AEventId);
end;

function Edit_GetCanUndo(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.CanUndo;
end;

function Edit_GetModified(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.Modified;
end;

procedure Edit_SetModified(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.Modified := AValue;
end;

function Edit_GetSelLength(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.SelLength;
end;

procedure Edit_SetSelLength(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.SelLength := AValue;
end;

function Edit_GetSelStart(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.SelStart;
end;

procedure Edit_SetSelStart(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.SelStart := AValue;
end;

function Edit_GetSelText(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.SelText);
end;

procedure Edit_SetSelText(AObj: TEdit; AValue: PChar); extdecl;
begin
  AObj.SelText := AValue;
end;

function Edit_GetDockSite(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure Edit_SetDockSite(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function Edit_GetBrush(AObj: TEdit): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function Edit_GetControlCount(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Edit_GetHandle(AObj: TEdit): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function Edit_GetParentWindow(AObj: TEdit): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Edit_SetParentWindow(AObj: TEdit; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Edit_GetUseDockManager(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure Edit_SetUseDockManager(AObj: TEdit; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function Edit_GetAction(AObj: TEdit): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure Edit_SetAction(AObj: TEdit; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure Edit_GetBoundsRect(AObj: TEdit; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Edit_SetBoundsRect(AObj: TEdit; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function Edit_GetClientHeight(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Edit_SetClientHeight(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure Edit_GetClientRect(AObj: TEdit; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Edit_GetClientWidth(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Edit_SetClientWidth(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Edit_GetFloating(AObj: TEdit): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function Edit_GetParent(AObj: TEdit): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Edit_SetParent(AObj: TEdit; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function Edit_GetLeft(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure Edit_SetLeft(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function Edit_GetTop(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure Edit_SetTop(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function Edit_GetWidth(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure Edit_SetWidth(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function Edit_GetHeight(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure Edit_SetHeight(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function Edit_GetCursor(AObj: TEdit): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Edit_SetCursor(AObj: TEdit; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function Edit_GetHint(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Edit_SetHint(AObj: TEdit; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function Edit_GetComponentCount(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Edit_GetComponentIndex(AObj: TEdit): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Edit_SetComponentIndex(AObj: TEdit; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Edit_GetOwner(AObj: TEdit): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function Edit_GetName(AObj: TEdit): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Edit_SetName(AObj: TEdit; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function Edit_GetTag(AObj: TEdit): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Edit_SetTag(AObj: TEdit; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function Edit_GetControls(AObj: TEdit; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Edit_GetComponents(AObj: TEdit; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function Edit_StaticClassType: TClass; extdecl;
begin
  Result := TEdit;
end;

exports
  Edit_Create,
  Edit_Free,
  Edit_Clear,
  Edit_ClearSelection,
  Edit_CopyToClipboard,
  Edit_CutToClipboard,
  Edit_PasteFromClipboard,
  Edit_Undo,
  Edit_SelectAll,
  Edit_CanFocus,
  Edit_FlipChildren,
  Edit_Focused,
  Edit_HandleAllocated,
  Edit_Invalidate,
  Edit_Realign,
  Edit_Repaint,
  Edit_ScaleBy,
  Edit_SetBounds,
  Edit_SetFocus,
  Edit_Update,
  Edit_BringToFront,
  Edit_ClientToScreen,
  Edit_ClientToParent,
  Edit_Dragging,
  Edit_HasParent,
  Edit_Hide,
  Edit_Perform,
  Edit_Refresh,
  Edit_ScreenToClient,
  Edit_ParentToClient,
  Edit_SendToBack,
  Edit_Show,
  Edit_GetTextBuf,
  Edit_GetTextLen,
  Edit_FindComponent,
  Edit_GetNamePath,
  Edit_Assign,
  Edit_ClassType,
  Edit_ClassName,
  Edit_InstanceSize,
  Edit_InheritsFrom,
  Edit_Equals,
  Edit_GetHashCode,
  Edit_ToString,
  Edit_GetAlign,
  Edit_SetAlign,
  Edit_GetAlignment,
  Edit_SetAlignment,
  Edit_GetAnchors,
  Edit_SetAnchors,
  Edit_GetAutoSelect,
  Edit_SetAutoSelect,
  Edit_GetAutoSize,
  Edit_SetAutoSize,
  Edit_GetBiDiMode,
  Edit_SetBiDiMode,
  Edit_GetBorderStyle,
  Edit_SetBorderStyle,
  Edit_GetCharCase,
  Edit_SetCharCase,
  Edit_GetColor,
  Edit_SetColor,
  Edit_GetDoubleBuffered,
  Edit_SetDoubleBuffered,
  Edit_GetDragCursor,
  Edit_SetDragCursor,
  Edit_GetDragKind,
  Edit_SetDragKind,
  Edit_GetDragMode,
  Edit_SetDragMode,
  Edit_GetEnabled,
  Edit_SetEnabled,
  Edit_GetFont,
  Edit_SetFont,
  Edit_GetHideSelection,
  Edit_SetHideSelection,
  Edit_GetMaxLength,
  Edit_SetMaxLength,
  Edit_GetNumbersOnly,
  Edit_SetNumbersOnly,
  Edit_GetParentColor,
  Edit_SetParentColor,
  Edit_GetParentFont,
  Edit_SetParentFont,
  Edit_GetParentShowHint,
  Edit_SetParentShowHint,
  Edit_GetPasswordChar,
  Edit_SetPasswordChar,
  Edit_GetPopupMenu,
  Edit_SetPopupMenu,
  Edit_GetReadOnly,
  Edit_SetReadOnly,
  Edit_GetShowHint,
  Edit_SetShowHint,
  Edit_GetTabOrder,
  Edit_SetTabOrder,
  Edit_GetTabStop,
  Edit_SetTabStop,
  Edit_GetText,
  Edit_SetText,
  Edit_GetTextHint,
  Edit_SetTextHint,
  Edit_GetVisible,
  Edit_SetVisible,
  Edit_SetOnChange,
  Edit_SetOnClick,
  Edit_SetOnContextPopup,
  Edit_SetOnDblClick,
  Edit_SetOnDragDrop,
  Edit_SetOnDragOver,
  Edit_SetOnEndDrag,
  Edit_SetOnEnter,
  Edit_SetOnExit,
  Edit_SetOnKeyDown,
  Edit_SetOnKeyPress,
  Edit_SetOnKeyUp,
  Edit_SetOnMouseDown,
  Edit_SetOnMouseEnter,
  Edit_SetOnMouseLeave,
  Edit_SetOnMouseMove,
  Edit_SetOnMouseUp,
  Edit_GetCanUndo,
  Edit_GetModified,
  Edit_SetModified,
  Edit_GetSelLength,
  Edit_SetSelLength,
  Edit_GetSelStart,
  Edit_SetSelStart,
  Edit_GetSelText,
  Edit_SetSelText,
  Edit_GetDockSite,
  Edit_SetDockSite,
  Edit_GetBrush,
  Edit_GetControlCount,
  Edit_GetHandle,
  Edit_GetParentWindow,
  Edit_SetParentWindow,
  Edit_GetUseDockManager,
  Edit_SetUseDockManager,
  Edit_GetAction,
  Edit_SetAction,
  Edit_GetBoundsRect,
  Edit_SetBoundsRect,
  Edit_GetClientHeight,
  Edit_SetClientHeight,
  Edit_GetClientRect,
  Edit_GetClientWidth,
  Edit_SetClientWidth,
  Edit_GetFloating,
  Edit_GetParent,
  Edit_SetParent,
  Edit_GetLeft,
  Edit_SetLeft,
  Edit_GetTop,
  Edit_SetTop,
  Edit_GetWidth,
  Edit_SetWidth,
  Edit_GetHeight,
  Edit_SetHeight,
  Edit_GetCursor,
  Edit_SetCursor,
  Edit_GetHint,
  Edit_SetHint,
  Edit_GetComponentCount,
  Edit_GetComponentIndex,
  Edit_SetComponentIndex,
  Edit_GetOwner,
  Edit_GetName,
  Edit_SetName,
  Edit_GetTag,
  Edit_SetTag,
  Edit_GetControls,
  Edit_GetComponents,
  Edit_StaticClassType;

