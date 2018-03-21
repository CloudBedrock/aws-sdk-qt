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

#ifndef QTAWS_ADDATTACHMENTSTOSETRESPONSE_P_H
#define QTAWS_ADDATTACHMENTSTOSETRESPONSE_P_H

#include "supportresponse.h"
#include "addattachmentstosetrequest.h"

namespace AWS {

namespace Support {

class AddAttachmentsToSetResponse;

class QTAWS_EXPORT AddAttachmentsToSetResponsePrivate : public SupportResponsePrivate {
    Q_OBJECT

public:

    AddAttachmentsToSetResponsePrivate(AddAttachmentsToSetResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddAttachmentsToSetResponse)
    Q_DISABLE_COPY(AddAttachmentsToSetResponsePrivate)

};

} // namespace Support
} // namespace AWS

#endif
