
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Object_Create: TObject; extdecl;
begin
  Result :=  TObject.Create;
end;

procedure Object_Free(AObj: TObject); extdecl;
begin
  AObj.Free;
end;

function Object_ClassType(AObj: TObject): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Object_ClassName(AObj: TObject): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Object_InstanceSize(AObj: TObject): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Object_InheritsFrom(AObj: TObject; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Object_Equals(AObj: TObject; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Object_GetHashCode(AObj: TObject): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Object_ToString(AObj: TObject): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Object_StaticClassType: TClass; extdecl;
begin
  Result := TObject;
end;

exports
  Object_Create,
  Object_Free,
  Object_ClassType,
  Object_ClassName,
  Object_InstanceSize,
  Object_InheritsFrom,
  Object_Equals,
  Object_GetHashCode,
  Object_ToString,
  Object_StaticClassType;

