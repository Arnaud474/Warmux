/******************************************************************************
 *  Warmux is a convivial mass murder game.
 *  Copyright (C) 2001-2011 Warmux Team.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 ******************************************************************************
 * Particle Engine
 *****************************************************************************/

#include "particles/smoke.h"
#include "particles/particle.h"
#include "graphic/sprite.h"

Smoke::Smoke() :
  Particle("smoke_particle")
{
  m_initial_time_to_live = 10;
  m_time_left_to_live = m_initial_time_to_live;
  m_time_between_scale = 100;

  image = ParticleEngine::GetSprite(SMOKE_spr);
  image->Scale(0.0,0.0);
  SetSize( Point2i(1, 1) );
}
