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

#ifndef QTAWS_DELETEFACESREQUEST_P_H
#define QTAWS_DELETEFACESREQUEST_P_H

#include "rekognition_p.h"
#include "deletefacesrequest.h"

namespace AWS {

namespace Rekognition {

class DeleteFacesRequest;

class QTAWS_EXPORT DeleteFacesRequestPrivate : public RekognitionPrivate {

public:
    DeleteFacesRequestPrivate(const Rekognition::Action action,
                                   DeleteFacesRequest * const q);
    DeleteFacesRequestPrivate(const DeleteFacesRequestPrivate &other,
                                   DeleteFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFacesRequest)

};

} // namespace Rekognition
} // namespace AWS

#endif
