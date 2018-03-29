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

#include "readpipelineresponse.h"
#include "readpipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/**
 * @class  ReadPipelineResponse
 *
 * @brief  Handles ElasticTranscoder ReadPipeline responses.
 *
 * @see    ElasticTranscoderClient::readPipeline
 */

/**
 * @brief  Constructs a new ReadPipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReadPipelineResponse::ReadPipelineResponse(
        const ReadPipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ReadPipelineResponsePrivate(this), parent)
{
    setRequest(new ReadPipelineRequest(request));
    setReply(reply);
}

const ReadPipelineRequest * ReadPipelineResponse::request() const
{
    Q_D(const ReadPipelineResponse);
    return static_cast<const ReadPipelineRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticTranscoder ReadPipeline response.
 *
 * @param  response  Response to parse.
 */
void ReadPipelineResponse::parseSuccess(QIODevice &response)
{
    Q_D(ReadPipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReadPipelineResponsePrivate
 *
 * @brief  Private implementation for ReadPipelineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReadPipelineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReadPipelineResponse instance.
 */
ReadPipelineResponsePrivate::ReadPipelineResponsePrivate(
    ReadPipelineResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticTranscoder ReadPipelineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReadPipelineResponsePrivate::ReadPipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReadPipelineResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
