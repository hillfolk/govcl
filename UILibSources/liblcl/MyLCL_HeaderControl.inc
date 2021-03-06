
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function HeaderControl_Create(AOwner: TComponent): THeaderControl; extdecl;
begin
  Result :=  THeaderControl.Create(AOwner);
end;

procedure HeaderControl_Free(AObj: THeaderControl); extdecl;
begin
  AObj.Free;
end;

procedure HeaderControl_FlipChildren(AObj: THeaderControl; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function HeaderControl_CanFocus(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function HeaderControl_Focused(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function HeaderControl_HandleAllocated(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure HeaderControl_Invalidate(AObj: THeaderControl); extdecl;
begin
  AObj.Invalidate;
end;

procedure HeaderControl_Realign(AObj: THeaderControl); extdecl;
begin
  AObj.Realign;
end;

procedure HeaderControl_Repaint(AObj: THeaderControl); extdecl;
begin
  AObj.Repaint;
end;

procedure HeaderControl_ScaleBy(AObj: THeaderControl; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure HeaderControl_SetBounds(AObj: THeaderControl; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure HeaderControl_SetFocus(AObj: THeaderControl); extdecl;
begin
  AObj.SetFocus;
end;

procedure HeaderControl_Update(AObj: THeaderControl); extdecl;
begin
  AObj.Update;
end;

procedure HeaderControl_BringToFront(AObj: THeaderControl); extdecl;
begin
  AObj.BringToFront;
end;

procedure HeaderControl_ClientToScreen(AObj: THeaderControl; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure HeaderControl_ClientToParent(AObj: THeaderControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function HeaderControl_Dragging(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function HeaderControl_HasParent(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure HeaderControl_Hide(AObj: THeaderControl); extdecl;
begin
  AObj.Hide;
end;

function HeaderControl_Perform(AObj: THeaderControl; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure HeaderControl_Refresh(AObj: THeaderControl); extdecl;
begin
  AObj.Refresh;
end;

procedure HeaderControl_ScreenToClient(AObj: THeaderControl; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure HeaderControl_ParentToClient(AObj: THeaderControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure HeaderControl_SendToBack(AObj: THeaderControl); extdecl;
begin
  AObj.SendToBack;
end;

procedure HeaderControl_Show(AObj: THeaderControl); extdecl;
begin
  AObj.Show;
end;

function HeaderControl_GetTextBuf(AObj: THeaderControl; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function HeaderControl_GetTextLen(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

function HeaderControl_FindComponent(AObj: THeaderControl; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function HeaderControl_GetNamePath(AObj: THeaderControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure HeaderControl_Assign(AObj: THeaderControl; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function HeaderControl_ClassType(AObj: THeaderControl): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function HeaderControl_ClassName(AObj: THeaderControl): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function HeaderControl_InstanceSize(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function HeaderControl_InheritsFrom(AObj: THeaderControl; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function HeaderControl_Equals(AObj: THeaderControl; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function HeaderControl_GetHashCode(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function HeaderControl_ToString(AObj: THeaderControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function HeaderControl_GetAlign(AObj: THeaderControl): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure HeaderControl_SetAlign(AObj: THeaderControl; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function HeaderControl_GetAnchors(AObj: THeaderControl): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure HeaderControl_SetAnchors(AObj: THeaderControl; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function HeaderControl_GetBorderWidth(AObj: THeaderControl): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure HeaderControl_SetBorderWidth(AObj: THeaderControl; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function HeaderControl_GetDoubleBuffered(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure HeaderControl_SetDoubleBuffered(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function HeaderControl_GetDragCursor(AObj: THeaderControl): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure HeaderControl_SetDragCursor(AObj: THeaderControl; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function HeaderControl_GetDragKind(AObj: THeaderControl): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure HeaderControl_SetDragKind(AObj: THeaderControl; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function HeaderControl_GetDragMode(AObj: THeaderControl): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure HeaderControl_SetDragMode(AObj: THeaderControl; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function HeaderControl_GetEnabled(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure HeaderControl_SetEnabled(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function HeaderControl_GetFont(AObj: THeaderControl): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure HeaderControl_SetFont(AObj: THeaderControl; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function HeaderControl_GetImages(AObj: THeaderControl): TCustomImageList; extdecl;
begin
  Result :=  AObj.Images;
end;

procedure HeaderControl_SetImages(AObj: THeaderControl; AValue: TCustomImageList); extdecl;
begin
  AObj.Images := AValue;
end;

function HeaderControl_GetShowHint(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure HeaderControl_SetShowHint(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function HeaderControl_GetParentFont(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure HeaderControl_SetParentFont(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function HeaderControl_GetParentShowHint(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure HeaderControl_SetParentShowHint(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function HeaderControl_GetPopupMenu(AObj: THeaderControl): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure HeaderControl_SetPopupMenu(AObj: THeaderControl; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function HeaderControl_GetVisible(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure HeaderControl_SetVisible(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure HeaderControl_SetOnContextPopup(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnDragDrop(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnDragOver(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnEndDock(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    EventClass.Remove(AObj, geEndDock);
    Exit;
  end;
  AObj.OnEndDock := @EventClass.OnEndDock;
  EventClass.Add(AObj, geEndDock, AEventId);
end;

procedure HeaderControl_SetOnEndDrag(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnMouseDown(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnMouseEnter(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnMouseLeave(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnMouseMove(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnMouseUp(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
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

procedure HeaderControl_SetOnResize(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnResize := nil;
    EventClass.Remove(AObj, geResize);
    Exit;
  end;
  AObj.OnResize := @EventClass.OnResize;
  EventClass.Add(AObj, geResize, AEventId);
end;

procedure HeaderControl_SetOnSectionClick(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnSectionClick := nil;
    EventClass.Remove(AObj, geSectionClick);
    Exit;
  end;
  AObj.OnSectionClick := @EventClass.OnSectionClick;
  EventClass.Add(AObj, geSectionClick, AEventId);
end;

procedure HeaderControl_SetOnSectionResize(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnSectionResize := nil;
    EventClass.Remove(AObj, geSectionResize);
    Exit;
  end;
  AObj.OnSectionResize := @EventClass.OnSectionResize;
  EventClass.Add(AObj, geSectionResize, AEventId);
end;

procedure HeaderControl_SetOnSectionTrack(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnSectionTrack := nil;
    EventClass.Remove(AObj, geSectionTrack);
    Exit;
  end;
  AObj.OnSectionTrack := @EventClass.OnSectionTrack;
  EventClass.Add(AObj, geSectionTrack, AEventId);
end;

procedure HeaderControl_SetOnSectionDrag(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnSectionDrag := nil;
    EventClass.Remove(AObj, geSectionDrag);
    Exit;
  end;
  AObj.OnSectionDrag := @EventClass.OnSectionDrag;
  EventClass.Add(AObj, geSectionDrag, AEventId);
end;

procedure HeaderControl_SetOnSectionEndDrag(AObj: THeaderControl; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnSectionEndDrag := nil;
    EventClass.Remove(AObj, geSectionEndDrag);
    Exit;
  end;
  AObj.OnSectionEndDrag := @EventClass.OnSectionEndDrag;
  EventClass.Add(AObj, geSectionEndDrag, AEventId);
end;

function HeaderControl_GetCanvas(AObj: THeaderControl): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function HeaderControl_GetDockSite(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure HeaderControl_SetDockSite(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function HeaderControl_GetBrush(AObj: THeaderControl): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function HeaderControl_GetControlCount(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function HeaderControl_GetHandle(AObj: THeaderControl): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function HeaderControl_GetParentWindow(AObj: THeaderControl): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure HeaderControl_SetParentWindow(AObj: THeaderControl; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function HeaderControl_GetTabOrder(AObj: THeaderControl): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure HeaderControl_SetTabOrder(AObj: THeaderControl; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function HeaderControl_GetTabStop(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure HeaderControl_SetTabStop(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function HeaderControl_GetUseDockManager(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure HeaderControl_SetUseDockManager(AObj: THeaderControl; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function HeaderControl_GetAction(AObj: THeaderControl): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure HeaderControl_SetAction(AObj: THeaderControl; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure HeaderControl_GetBoundsRect(AObj: THeaderControl; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure HeaderControl_SetBoundsRect(AObj: THeaderControl; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function HeaderControl_GetClientHeight(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure HeaderControl_SetClientHeight(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure HeaderControl_GetClientRect(AObj: THeaderControl; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function HeaderControl_GetClientWidth(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure HeaderControl_SetClientWidth(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function HeaderControl_GetFloating(AObj: THeaderControl): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function HeaderControl_GetParent(AObj: THeaderControl): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure HeaderControl_SetParent(AObj: THeaderControl; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function HeaderControl_GetLeft(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure HeaderControl_SetLeft(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function HeaderControl_GetTop(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure HeaderControl_SetTop(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function HeaderControl_GetWidth(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure HeaderControl_SetWidth(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function HeaderControl_GetHeight(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure HeaderControl_SetHeight(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function HeaderControl_GetCursor(AObj: THeaderControl): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure HeaderControl_SetCursor(AObj: THeaderControl; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function HeaderControl_GetHint(AObj: THeaderControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure HeaderControl_SetHint(AObj: THeaderControl; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function HeaderControl_GetComponentCount(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function HeaderControl_GetComponentIndex(AObj: THeaderControl): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure HeaderControl_SetComponentIndex(AObj: THeaderControl; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function HeaderControl_GetOwner(AObj: THeaderControl): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function HeaderControl_GetName(AObj: THeaderControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure HeaderControl_SetName(AObj: THeaderControl; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function HeaderControl_GetTag(AObj: THeaderControl): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure HeaderControl_SetTag(AObj: THeaderControl; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function HeaderControl_GetControls(AObj: THeaderControl; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function HeaderControl_GetComponents(AObj: THeaderControl; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function HeaderControl_StaticClassType: TClass; extdecl;
begin
  Result := THeaderControl;
end;

exports
  HeaderControl_Create,
  HeaderControl_Free,
  HeaderControl_FlipChildren,
  HeaderControl_CanFocus,
  HeaderControl_Focused,
  HeaderControl_HandleAllocated,
  HeaderControl_Invalidate,
  HeaderControl_Realign,
  HeaderControl_Repaint,
  HeaderControl_ScaleBy,
  HeaderControl_SetBounds,
  HeaderControl_SetFocus,
  HeaderControl_Update,
  HeaderControl_BringToFront,
  HeaderControl_ClientToScreen,
  HeaderControl_ClientToParent,
  HeaderControl_Dragging,
  HeaderControl_HasParent,
  HeaderControl_Hide,
  HeaderControl_Perform,
  HeaderControl_Refresh,
  HeaderControl_ScreenToClient,
  HeaderControl_ParentToClient,
  HeaderControl_SendToBack,
  HeaderControl_Show,
  HeaderControl_GetTextBuf,
  HeaderControl_GetTextLen,
  HeaderControl_FindComponent,
  HeaderControl_GetNamePath,
  HeaderControl_Assign,
  HeaderControl_ClassType,
  HeaderControl_ClassName,
  HeaderControl_InstanceSize,
  HeaderControl_InheritsFrom,
  HeaderControl_Equals,
  HeaderControl_GetHashCode,
  HeaderControl_ToString,
  HeaderControl_GetAlign,
  HeaderControl_SetAlign,
  HeaderControl_GetAnchors,
  HeaderControl_SetAnchors,
  HeaderControl_GetBorderWidth,
  HeaderControl_SetBorderWidth,
  HeaderControl_GetDoubleBuffered,
  HeaderControl_SetDoubleBuffered,
  HeaderControl_GetDragCursor,
  HeaderControl_SetDragCursor,
  HeaderControl_GetDragKind,
  HeaderControl_SetDragKind,
  HeaderControl_GetDragMode,
  HeaderControl_SetDragMode,
  HeaderControl_GetEnabled,
  HeaderControl_SetEnabled,
  HeaderControl_GetFont,
  HeaderControl_SetFont,
  HeaderControl_GetImages,
  HeaderControl_SetImages,
  HeaderControl_GetShowHint,
  HeaderControl_SetShowHint,
  HeaderControl_GetParentFont,
  HeaderControl_SetParentFont,
  HeaderControl_GetParentShowHint,
  HeaderControl_SetParentShowHint,
  HeaderControl_GetPopupMenu,
  HeaderControl_SetPopupMenu,
  HeaderControl_GetVisible,
  HeaderControl_SetVisible,
  HeaderControl_SetOnContextPopup,
  HeaderControl_SetOnDragDrop,
  HeaderControl_SetOnDragOver,
  HeaderControl_SetOnEndDock,
  HeaderControl_SetOnEndDrag,
  HeaderControl_SetOnMouseDown,
  HeaderControl_SetOnMouseEnter,
  HeaderControl_SetOnMouseLeave,
  HeaderControl_SetOnMouseMove,
  HeaderControl_SetOnMouseUp,
  HeaderControl_SetOnResize,
  HeaderControl_SetOnSectionClick,
  HeaderControl_SetOnSectionResize,
  HeaderControl_SetOnSectionTrack,
  HeaderControl_SetOnSectionDrag,
  HeaderControl_SetOnSectionEndDrag,
  HeaderControl_GetCanvas,
  HeaderControl_GetDockSite,
  HeaderControl_SetDockSite,
  HeaderControl_GetBrush,
  HeaderControl_GetControlCount,
  HeaderControl_GetHandle,
  HeaderControl_GetParentWindow,
  HeaderControl_SetParentWindow,
  HeaderControl_GetTabOrder,
  HeaderControl_SetTabOrder,
  HeaderControl_GetTabStop,
  HeaderControl_SetTabStop,
  HeaderControl_GetUseDockManager,
  HeaderControl_SetUseDockManager,
  HeaderControl_GetAction,
  HeaderControl_SetAction,
  HeaderControl_GetBoundsRect,
  HeaderControl_SetBoundsRect,
  HeaderControl_GetClientHeight,
  HeaderControl_SetClientHeight,
  HeaderControl_GetClientRect,
  HeaderControl_GetClientWidth,
  HeaderControl_SetClientWidth,
  HeaderControl_GetFloating,
  HeaderControl_GetParent,
  HeaderControl_SetParent,
  HeaderControl_GetLeft,
  HeaderControl_SetLeft,
  HeaderControl_GetTop,
  HeaderControl_SetTop,
  HeaderControl_GetWidth,
  HeaderControl_SetWidth,
  HeaderControl_GetHeight,
  HeaderControl_SetHeight,
  HeaderControl_GetCursor,
  HeaderControl_SetCursor,
  HeaderControl_GetHint,
  HeaderControl_SetHint,
  HeaderControl_GetComponentCount,
  HeaderControl_GetComponentIndex,
  HeaderControl_SetComponentIndex,
  HeaderControl_GetOwner,
  HeaderControl_GetName,
  HeaderControl_SetName,
  HeaderControl_GetTag,
  HeaderControl_SetTag,
  HeaderControl_GetControls,
  HeaderControl_GetComponents,
  HeaderControl_StaticClassType;

