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

#include "createdirectoryresponse.h"
#include "createdirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  CreateDirectoryResponse
 *
 * @brief  Handles CloudDirectory CreateDirectory responses.
 *
 * @see    CloudDirectoryClient::createDirectory
 */

/**
 * @brief  Constructs a new CreateDirectoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectoryResponse::CreateDirectoryResponse(
        const CreateDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateDirectoryResponsePrivate(this), parent)
{
    setRequest(new CreateDirectoryRequest(request));
    setReply(reply);
}

const CreateDirectoryRequest * CreateDirectoryResponse::request() const
{
    Q_D(const CreateDirectoryResponse);
    return static_cast<const CreateDirectoryRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory CreateDirectory response.
 *
 * @param  response  Response to parse.
 */
void CreateDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDirectoryResponsePrivate
 *
 * @brief  Private implementation for CreateDirectoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDirectoryResponse instance.
 */
CreateDirectoryResponsePrivate::CreateDirectoryResponsePrivate(
    CreateDirectoryQueueResponse * const q) : CreateDirectoryPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory CreateDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDirectoryResponsePrivate::CreateDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectoryResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
