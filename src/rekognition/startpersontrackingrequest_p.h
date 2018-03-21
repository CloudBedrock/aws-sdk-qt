/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STARTPERSONTRACKINGREQUEST_P_H
#define QTAWS_STARTPERSONTRACKINGREQUEST_P_H

#include "rekognition_p.h"
#include "startpersontrackingrequest.h"

namespace AWS {

namespace Rekognition {

class StartPersonTrackingRequest;

class QTAWS_EXPORT StartPersonTrackingRequestPrivate : public RekognitionPrivate {

public:
    StartPersonTrackingRequestPrivate(const Rekognition::Action action,
                                   StartPersonTrackingRequest * const q);
    StartPersonTrackingRequestPrivate(const StartPersonTrackingRequestPrivate &other,
                                   StartPersonTrackingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPersonTrackingRequest)

};

} // namespace Rekognition
} // namespace AWS

#endif
