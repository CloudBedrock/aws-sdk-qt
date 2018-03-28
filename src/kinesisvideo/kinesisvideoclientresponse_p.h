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

#ifndef QTAWS_KINESISVIDEOCLIENTRESPONSE_P_H
#define QTAWS_KINESISVIDEOCLIENTRESPONSE_P_H

#include "kinesisvideoresponse.h"
#include "kinesisvideoclientrequest.h"

namespace AWS {

namespace KinesisVideo {

class KinesisVideoClientResponse;

class QTAWS_EXPORT KinesisVideoClientResponsePrivate : public AwsAbstractResponsePrivate {
    Q_OBJECT

public:

    KinesisVideoClientResponsePrivate(KinesisVideoClientResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisVideoClientResponse)
    Q_DISABLE_COPY(KinesisVideoClientResponsePrivate)

};

} // namespace KinesisVideo
} // namespace AWS

#endif
