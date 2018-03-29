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

#include "createjobqueueresponse.h"
#include "createjobqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  CreateJobQueueResponse
 *
 * @brief  Handles Batch CreateJobQueue responses.
 *
 * @see    BatchClient::createJobQueue
 */

/**
 * @brief  Constructs a new CreateJobQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateJobQueueResponse::CreateJobQueueResponse(
        const CreateJobQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new CreateJobQueueResponsePrivate(this), parent)
{
    setRequest(new CreateJobQueueRequest(request));
    setReply(reply);
}

const CreateJobQueueRequest * CreateJobQueueResponse::request() const
{
    Q_D(const CreateJobQueueResponse);
    return static_cast<const CreateJobQueueRequest *>(d->request);
}

/**
 * @brief  Parse a Batch CreateJobQueue response.
 *
 * @param  response  Response to parse.
 */
void CreateJobQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateJobQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateJobQueueResponsePrivate
 *
 * @brief  Private implementation for CreateJobQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateJobQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateJobQueueResponse instance.
 */
CreateJobQueueResponsePrivate::CreateJobQueueResponsePrivate(
    CreateJobQueueResponse * const q) : BatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an Batch CreateJobQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateJobQueueResponsePrivate::CreateJobQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobQueueResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
