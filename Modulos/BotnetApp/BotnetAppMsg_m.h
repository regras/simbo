//
// Generated file, do not edit! Created by nedtool 5.0 from inet/applications/simbo/Modulos/BotnetApp/BotnetAppMsg.msg.
//

#ifndef __INET_BOTNETAPPMSG_M_H
#define __INET_BOTNETAPPMSG_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/common/INETDefs.h"
#include "inet/applications/simbo/Classes/Botnet/BotnetCommandStruct.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/applications/simbo/Modulos/BotnetApp/BotnetAppMsg.msg:28</tt> by nedtool.
 * <pre>
 * packet BotnetAppMsg
 * {
 *     int acao;
 *     int vulnerabilidade;
 *     int dado;
 *     BotnetCommandStruct BCS;
 * }
 * </pre>
 */
class BotnetAppMsg : public ::omnetpp::cPacket
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
    BotnetAppMsg(const char *name=nullptr, int kind=0);
    BotnetAppMsg(const BotnetAppMsg& other);
    virtual ~BotnetAppMsg();
    BotnetAppMsg& operator=(const BotnetAppMsg& other);
    virtual BotnetAppMsg *dup() const {return new BotnetAppMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

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

