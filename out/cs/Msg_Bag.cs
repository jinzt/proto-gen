// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: Msg_Bag.proto

#pragma warning disable CS1591, CS0612, CS3021

[global::ProtoBuf.ProtoContract()]
public partial class SetupEquipReq
{
    [global::ProtoBuf.ProtoMember(1, Name = @"upguid")]
    public ulong Upguid { get; set; }

    [global::ProtoBuf.ProtoMember(2, Name = @"downguid")]
    public ulong Downguid { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupEquipAck
{
    [global::ProtoBuf.ProtoMember(1)]
    public uint RetCode { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupPetReq
{
    [global::ProtoBuf.ProtoMember(1, Name = @"upguid")]
    public ulong Upguid { get; set; }

    [global::ProtoBuf.ProtoMember(2, Name = @"downguid")]
    public ulong Downguid { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupPetAck
{
    [global::ProtoBuf.ProtoMember(1)]
    public uint RetCode { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupPartnerReq
{
    [global::ProtoBuf.ProtoMember(1, Name = @"upguid")]
    public ulong Upguid { get; set; }

    [global::ProtoBuf.ProtoMember(2, Name = @"downguid")]
    public ulong Downguid { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupPartnerAck
{
    [global::ProtoBuf.ProtoMember(1)]
    public uint RetCode { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupMountReq
{
    [global::ProtoBuf.ProtoMember(1, Name = @"upguid")]
    public ulong Upguid { get; set; }

    [global::ProtoBuf.ProtoMember(2, Name = @"downguid")]
    public ulong Downguid { get; set; }

}

[global::ProtoBuf.ProtoContract()]
public partial class SetupMountAck
{
    [global::ProtoBuf.ProtoMember(1)]
    public uint RetCode { get; set; }

}

#pragma warning restore CS1591, CS0612, CS3021