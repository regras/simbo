//
// Generated file, do not edit! Created by nedtool 5.1 from inet/applications/simbo/Modulos/BotnetApp/BotnetAppMsg.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_BOTNETAPPMSG_M_H
#define __INET_BOTNETAPPMSG_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0501
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif

// cplusplus {{
#include "inet/common/INETDefs.h"
#include "inet/applications/simbo/Classes/Botnet/BotnetCommandStruct.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/applications/simbo/Modulos/BotnetApp/BotnetAppMsg.msg:29</tt> by nedtool.
 * <pre>
 * //fixme: desenvolver parametros.
 * packet BotnetAppMsg
 * {
 *     int acao;
 *     int vulnerabilidade;
 *     int dado;
 *     BotnetCommandStruct BCS;
 * }
 * </pre>
 */
class INET_API BotnetAppMsg : public ::omnetpp::cPacket
{
  protected:
    int acao;
    int vulnerabilidade;
    int dado;
    BotnetCommandStruct BCS;

  private:
    void copy(const BotnetAppMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BotnetAppMsg&);

  public:
    BotnetAppMsg(const char *name=nullptr, short kind=0);
    BotnetAppMsg(const BotnetAppMsg& other);
    virtual ~BotnetAppMsg();
    BotnetAppMsg& operator=(const BotnetAppMsg& other);
    virtual BotnetAppMsg *dup() const override {return new BotnetAppMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getAcao() const;
    virtual void setAcao(int acao);
    virtual int getVulnerabilidade() const;
    virtual void setVulnerabilidade(int vulnerabilidade);
    virtual int getDado() const;
    virtual void setDado(int dado);
    virtual BotnetCommandStruct& getBCS();
    virtual const BotnetCommandStruct& getBCS() const {return const_cast<BotnetAppMsg*>(this)->getBCS();}
    virtual void setBCS(const BotnetCommandStruct& BCS);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BotnetAppMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BotnetAppMsg& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_BOTNETAPPMSG_M_H

