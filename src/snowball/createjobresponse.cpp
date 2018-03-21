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

#include "createjobresponse.h"
#include "createjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  CreateJobResponse
 *
 * @brief  Handles Snowball CreateJob responses.
 *
 * @see    SnowballClient::createJob
 */

/**
 * @brief  Constructs a new CreateJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateJobResponse::CreateJobResponse(
        const CreateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CreateJobResponsePrivate(this), parent)
{
    setRequest(new CreateJobRequest(request));
    setReply(reply);
}

const CreateJobRequest * CreateJobResponse::request() const
{
    Q_D(const CreateJobResponse);
    return static_cast<const CreateJobRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball CreateJob response.
 *
 * @param  response  Response to parse.
 */
void CreateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateJobResponsePrivate
 *
 * @brief  Private implementation for CreateJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateJobResponse instance.
 */
CreateJobResponsePrivate::CreateJobResponsePrivate(
    CreateJobQueueResponse * const q) : CreateJobPrivate(q)
{

}

/**
 * @brief  Parse an Snowball CreateJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateJobResponsePrivate::CreateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace AWS
