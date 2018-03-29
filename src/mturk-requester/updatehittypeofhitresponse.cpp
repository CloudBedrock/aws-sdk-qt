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

#include "updatehittypeofhitresponse.h"
#include "updatehittypeofhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  UpdateHITTypeOfHITResponse
 *
 * @brief  Handles MTurk UpdateHITTypeOfHIT responses.
 *
 * @see    MTurkClient::updateHITTypeOfHIT
 */

/**
 * @brief  Constructs a new UpdateHITTypeOfHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHITTypeOfHITResponse::UpdateHITTypeOfHITResponse(
        const UpdateHITTypeOfHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateHITTypeOfHITResponsePrivate(this), parent)
{
    setRequest(new UpdateHITTypeOfHITRequest(request));
    setReply(reply);
}

const UpdateHITTypeOfHITRequest * UpdateHITTypeOfHITResponse::request() const
{
    Q_D(const UpdateHITTypeOfHITResponse);
    return static_cast<const UpdateHITTypeOfHITRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk UpdateHITTypeOfHIT response.
 *
 * @param  response  Response to parse.
 */
void UpdateHITTypeOfHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateHITTypeOfHITResponsePrivate
 *
 * @brief  Private implementation for UpdateHITTypeOfHITResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHITTypeOfHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateHITTypeOfHITResponse instance.
 */
UpdateHITTypeOfHITResponsePrivate::UpdateHITTypeOfHITResponsePrivate(
    UpdateHITTypeOfHITQueueResponse * const q) : UpdateHITTypeOfHITPrivate(q)
{

}

/**
 * @brief  Parse an MTurk UpdateHITTypeOfHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateHITTypeOfHITResponsePrivate::UpdateHITTypeOfHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHITTypeOfHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
