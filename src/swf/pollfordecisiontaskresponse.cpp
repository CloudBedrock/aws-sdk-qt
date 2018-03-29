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

#include "pollfordecisiontaskresponse.h"
#include "pollfordecisiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  PollForDecisionTaskResponse
 *
 * @brief  Handles SWF PollForDecisionTask responses.
 *
 * @see    SWFClient::pollForDecisionTask
 */

/**
 * @brief  Constructs a new PollForDecisionTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForDecisionTaskResponse::PollForDecisionTaskResponse(
        const PollForDecisionTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollForDecisionTaskResponse(new PollForDecisionTaskResponsePrivate(this), parent)
{
    setRequest(new PollForDecisionTaskRequest(request));
    setReply(reply);
}

const PollForDecisionTaskRequest * PollForDecisionTaskResponse::request() const
{
    Q_D(const PollForDecisionTaskResponse);
    return static_cast<const PollForDecisionTaskRequest *>(d->request);
}

/**
 * @brief  Parse a SWF PollForDecisionTask response.
 *
 * @param  response  Response to parse.
 */
void PollForDecisionTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(PollForDecisionTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PollForDecisionTaskResponsePrivate
 *
 * @brief  Private implementation for PollForDecisionTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForDecisionTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForDecisionTaskResponse instance.
 */
PollForDecisionTaskResponsePrivate::PollForDecisionTaskResponsePrivate(
    PollForDecisionTaskResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF PollForDecisionTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForDecisionTaskResponsePrivate::parsePollForDecisionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForDecisionTaskResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
