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

#include "createcollectionresponse.h"
#include "createcollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  CreateCollectionResponse
 *
 * @brief  Handles Rekognition CreateCollection responses.
 *
 * @see    RekognitionClient::createCollection
 */

/**
 * @brief  Constructs a new CreateCollectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCollectionResponse::CreateCollectionResponse(
        const CreateCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CreateCollectionResponsePrivate(this), parent)
{
    setRequest(new CreateCollectionRequest(request));
    setReply(reply);
}

const CreateCollectionRequest * CreateCollectionResponse::request() const
{
    Q_D(const CreateCollectionResponse);
    return static_cast<const CreateCollectionRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition CreateCollection response.
 *
 * @param  response  Response to parse.
 */
void CreateCollectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCollectionResponsePrivate
 *
 * @brief  Private implementation for CreateCollectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCollectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCollectionResponse instance.
 */
CreateCollectionResponsePrivate::CreateCollectionResponsePrivate(
    CreateCollectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition CreateCollectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCollectionResponsePrivate::CreateCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCollectionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
