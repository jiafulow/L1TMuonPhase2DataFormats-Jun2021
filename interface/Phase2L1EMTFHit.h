#ifndef DataFormats_L1TMuonPhase2_Phase2L1EMTFHit_h
#define DataFormats_L1TMuonPhase2_Phase2L1EMTFHit_h

#include <cstdint>
#include <vector>

#include "DataFormats/L1TMuonPhase2/interface/L1TMuonSubsystems.h"

namespace l1t {

  class Phase2L1EMTFHit {
  public:
    Phase2L1EMTFHit()
        : raw_det_id_(0),
          subsystem_(L1TMuon::kNSubsystems),
          endcap_(0),
          sector_(0),
          subsector_(0),
          station_(0),
          ring_(0),
          chamber_(0),
          cscid_(0),
          strip_(0),
          strip_lo_(0),
          strip_hi_(0),
          wire1_(0),
          wire2_(0),
          bend_(0),
          quality_(0),
          pattern_(0),
          neighbor_(false),
          zones_(0),
          timezones_(0),
          cscfr_(0),
          gemdl_(0),
          subbx_(0),
          bx_(0),
          emtf_chamber_(0),
          emtf_segment_(0),
          emtf_phi_(0),
          emtf_bend_(0),
          emtf_theta1_(0),
          emtf_theta2_(0),
          emtf_qual1_(0),
          emtf_qual2_(0),
          emtf_time_(0),
          emtf_site_(0),
          emtf_host_(0),
          glob_phi_(0.f),
          glob_theta_(0.f),
          glob_perp_(0.f),
          glob_z_(0.f),
          glob_time_(0.f),
          valid_(false) {}

    ~Phase2L1EMTFHit() {}

    // Setters
    void setRawDetId(uint32_t aRawDetId) { raw_det_id_ = aRawDetId; }
    void setSubsystem(int16_t aSubsystem) { subsystem_ = aSubsystem; }
    void setEndcap(int16_t aEndcap) { endcap_ = aEndcap; }
    void setSector(int16_t aSector) { sector_ = aSector; }
    void setSubsector(int16_t aSubsector) { subsector_ = aSubsector; }
    void setStation(int16_t aStation) { station_ = aStation; }
    void setRing(int16_t aRing) { ring_ = aRing; }
    void setChamber(int16_t aChamber) { chamber_ = aChamber; }
    void setCscid(int16_t aCscid) { cscid_ = aCscid; }
    void setStrip(int16_t aStrip) { strip_ = aStrip; }
    void setStripLo(int16_t aStripLo) { strip_lo_ = aStripLo; }
    void setStripHi(int16_t aStripHi) { strip_hi_ = aStripHi; }
    void setWire1(int16_t aWire1) { wire1_ = aWire1; }
    void setWire2(int16_t aWire2) { wire2_ = aWire2; }
    void setBend(int16_t aBend) { bend_ = aBend; }
    void setQuality(int16_t aQuality) { quality_ = aQuality; }
    void setPattern(int16_t aPattern) { pattern_ = aPattern; }
    void setNeighbor(bool aNeighbor) { neighbor_ = aNeighbor; }
    void setZones(int16_t aZones) { zones_ = aZones; }
    void setTimezones(int16_t aTimezones) { timezones_ = aTimezones; }
    void setCscfr(int16_t aCscfr) { cscfr_ = aCscfr; }
    void setGemdl(int16_t aGemdl) { gemdl_ = aGemdl; }
    void setSubbx(int16_t aSubbx) { subbx_ = aSubbx; }
    void setBx(int16_t aBx) { bx_ = aBx; }
    void setEmtfChamber(int16_t aEmtfChamber) { emtf_chamber_ = aEmtfChamber; }
    void setEmtfSegment(int16_t aEmtfSegment) { emtf_segment_ = aEmtfSegment; }
    void setEmtfPhi(int16_t aEmtfPhi) { emtf_phi_ = aEmtfPhi; }
    void setEmtfBend(int16_t aEmtfBend) { emtf_bend_ = aEmtfBend; }
    void setEmtfTheta1(int16_t aEmtfTheta1) { emtf_theta1_ = aEmtfTheta1; }
    void setEmtfTheta2(int16_t aEmtfTheta2) { emtf_theta2_ = aEmtfTheta2; }
    void setEmtfQual1(int16_t aEmtfQual1) { emtf_qual1_ = aEmtfQual1; }
    void setEmtfQual2(int16_t aEmtfQual2) { emtf_qual2_ = aEmtfQual2; }
    void setEmtfTime(int16_t aEmtfTime) { emtf_time_ = aEmtfTime; }
    void setEmtfSite(int16_t aEmtfSite) { emtf_site_ = aEmtfSite; }
    void setEmtfHost(int16_t aEmtfHost) { emtf_host_ = aEmtfHost; }
    void setGlobPhi(float aGlobPhi) { glob_phi_ = aGlobPhi; }
    void setGlobTheta(float aGlobTheta) { glob_theta_ = aGlobTheta; }
    void setGlobPerp(float aGlobPerp) { glob_perp_ = aGlobPerp; }
    void setGlobZ(float aGlobZ) { glob_z_ = aGlobZ; }
    void setGlobTime(float aGlobTime) { glob_time_ = aGlobTime; }
    void setValid(bool aValid) { valid_ = aValid; }

    // Getters
    uint32_t rawDetId() const { return raw_det_id_; }
    int16_t subsystem() const { return subsystem_; }
    int16_t endcap() const { return endcap_; }
    int16_t sector() const { return sector_; }
    int16_t subsector() const { return subsector_; }
    int16_t station() const { return station_; }
    int16_t ring() const { return ring_; }
    int16_t chamber() const { return chamber_; }
    int16_t cscid() const { return cscid_; }
    int16_t strip() const { return strip_; }
    int16_t stripLo() const { return strip_lo_; }
    int16_t stripHi() const { return strip_hi_; }
    int16_t wire1() const { return wire1_; }
    int16_t wire2() const { return wire2_; }
    int16_t bend() const { return bend_; }
    int16_t quality() const { return quality_; }
    int16_t pattern() const { return pattern_; }
    bool neighbor() const { return neighbor_; }
    int16_t zones() const { return zones_; }
    int16_t timezones() const { return timezones_; }
    int16_t cscfr() const { return cscfr_; }
    int16_t gemdl() const { return gemdl_; }
    int16_t subbx() const { return subbx_; }
    int16_t bx() const { return bx_; }
    int16_t emtfChamber() const { return emtf_chamber_; }
    int16_t emtfSegment() const { return emtf_segment_; }
    int16_t emtfPhi() const { return emtf_phi_; }
    int16_t emtfBend() const { return emtf_bend_; }
    int16_t emtfTheta1() const { return emtf_theta1_; }
    int16_t emtfTheta2() const { return emtf_theta2_; }
    int16_t emtfQual1() const { return emtf_qual1_; }
    int16_t emtfQual2() const { return emtf_qual2_; }
    int16_t emtfTime() const { return emtf_time_; }
    int16_t emtfSite() const { return emtf_site_; }
    int16_t emtfHost() const { return emtf_host_; }
    float globPhi() const { return glob_phi_; }
    float globTheta() const { return glob_theta_; }
    float globPerp() const { return glob_perp_; }
    float globZ() const { return glob_z_; }
    float globTime() const { return glob_time_; }
    bool valid() const { return valid_; }

  private:
    uint32_t raw_det_id_;
    int16_t subsystem_;
    int16_t endcap_;
    int16_t sector_;
    int16_t subsector_;
    int16_t station_;
    int16_t ring_;
    int16_t chamber_;
    int16_t cscid_;
    int16_t strip_;
    int16_t strip_lo_;
    int16_t strip_hi_;
    int16_t wire1_;
    int16_t wire2_;
    int16_t bend_;
    int16_t quality_;
    int16_t pattern_;
    bool neighbor_;
    int16_t zones_;
    int16_t timezones_;
    int16_t cscfr_;
    int16_t gemdl_;
    int16_t subbx_;
    int16_t bx_;
    int16_t emtf_chamber_;
    int16_t emtf_segment_;
    int16_t emtf_phi_;
    int16_t emtf_bend_;
    int16_t emtf_theta1_;
    int16_t emtf_theta2_;
    int16_t emtf_qual1_;
    int16_t emtf_qual2_;
    int16_t emtf_time_;
    int16_t emtf_site_;
    int16_t emtf_host_;
    float glob_phi_;
    float glob_theta_;
    float glob_perp_;
    float glob_z_;
    float glob_time_;
    bool valid_;
  };

  typedef std::vector<Phase2L1EMTFHit> Phase2L1EMTFHitCollection;

}  // namespace l1t

#endif  // DataFormats_L1TMuonPhase2_Phase2L1EMTFHit_h not defined
