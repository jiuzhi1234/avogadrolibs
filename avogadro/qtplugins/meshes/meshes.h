/******************************************************************************
  This source file is part of the Avogadro project.
  This source code is released under the 3-Clause BSD License, (see "LICENSE").
******************************************************************************/

#ifndef AVOGADRO_QTPLUGINS_MESHES_H
#define AVOGADRO_QTPLUGINS_MESHES_H

#include <avogadro/qtgui/sceneplugin.h>

namespace Avogadro {
namespace QtPlugins {

/**
 * @brief Render one or more triangular meshes.
 * @author Marcus D. Hanwell
 */
class Meshes : public QtGui::ScenePlugin
{
  Q_OBJECT

public:
  explicit Meshes(QObject* parent = nullptr);
  ~Meshes() override;

  void process(const QtGui::Molecule& mol,
               Rendering::GroupNode& node) override;

  QString name() const override { return tr("Meshes"); }

  QString description() const override { return tr("Render triangle meshes."); }

  bool isEnabled() const override;

  bool isActiveLayerEnabled() const override;

  void setEnabled(bool enable) override;

private:
  bool m_enabled;
};

} // end namespace QtPlugins
} // end namespace Avogadro

#endif // AVOGADRO_QTPLUGINS_MESHES_H
