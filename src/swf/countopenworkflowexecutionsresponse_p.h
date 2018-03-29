/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COUNTOPENWORKFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_COUNTOPENWORKFLOWEXECUTIONSRESPONSE_P_H

#include "swfresponse.h"
#include "countopenworkflowexecutionsrequest.h"

namespace AWS {

namespace SWF {

class CountOpenWorkflowExecutionsResponse;

class QTAWS_EXPORT CountOpenWorkflowExecutionsResponsePrivate : public SWFResponsePrivate {
    Q_OBJECT

public:

    CountOpenWorkflowExecutionsResponsePrivate(CountOpenWorkflowExecutionsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CountOpenWorkflowExecutionsResponse)
    Q_DISABLE_COPY(CountOpenWorkflowExecutionsResponsePrivate)

};

} // namespace SWF
} // namespace AWS

#endif
